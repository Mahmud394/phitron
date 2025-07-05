let cart = [];

const loadAllProduct = () => {
  const promises = [];
  for (let i = 0; i < 8; i++) {
    promises.push(
      fetch("https://www.thecocktaildb.com/api/json/v1/1/random.php").then(res => res.json())
    );
  }

  Promise.all(promises).then(results => {
    const drinks = results.flatMap(r => r.drinks || []);
    displayProduct(drinks);
  });
};

const searchDrink = () => {
  const searchText = document.getElementById('search-input').value.trim();
  if (searchText === "") {
    loadAllProduct();
    return;
  }
  fetch(`https://www.thecocktaildb.com/api/json/v1/1/search.php?s=${searchText}`)
    .then(res => res.json())
    .then(data => {
      if (data.drinks) {
        displayProduct(data.drinks.slice(0, 8)); 
      } else {
        document.getElementById('drink-container').innerHTML = "<p>Not Found</p>";
      }
    });
};

const displayProduct = (drinks) => {
  const container = document.getElementById('drink-container');
  container.innerHTML = '';
  drinks.forEach(drink => {
    const div = document.createElement('div');
    div.className = 'drink-card';
    const alreadyAdded = cart.some(item => item.name === drink.strDrink);
   div.innerHTML = `
  <img src="${drink.strDrinkThumb}" alt="${drink.strDrink}">
  <h4>${drink.strDrink}</h4>
  <p>Category: ${drink.strCategory}</p>
  <p>Instructions: ${drink.strInstructions.substring(0, 15)}...</p>
  <button class="btn btn-add" ${alreadyAdded ? 'disabled' : ''} onclick="addToCart('${drink.strDrink}', '${drink.strDrinkThumb}')">
    ${alreadyAdded ? 'Already Selected' : 'Add to Group'}
  </button>
  <button class="btn btn-details" onclick='showDetails(${JSON.stringify(drink).replace(/'/g, "\\'")})'>Details</button>
`;

    container.appendChild(div);
  });
};

const addToCart = (name, img) => {
  if (cart.length >= 7) {
    alert("You cannot add more than 7 drinks.");
    return;
  }
  cart.push({ name, img });
  updateCartUI();
  loadAllProduct(); 
};

const updateCartUI = () => {
  document.getElementById('cart-count').innerText = cart.length;
  const list = document.getElementById('cart-list');
  list.innerHTML = `
    <table>
      <thead>
        <tr>
          <th>SL</th>
          <th>Img</th>
          <th>Name</th>
        </tr>
      </thead>
      <tbody>
        ${cart.map((item, idx) => `
          <tr>
            <td>${idx + 1}</td>
            <td><img src="${item.img}" alt="${item.name}" style="width:30px; height:30px; border-radius:50%;"></td>
            <td>${item.name}</td>
          </tr>
        `).join('')}
      </tbody>
    </table>
  `;
};

const showDetails = (drink) => {
  document.getElementById('modal-title').innerText = drink.strDrink;
  document.getElementById('modal-img').src = drink.strDrinkThumb;
  document.getElementById('modal-content').innerHTML = `
    <strong>Category:</strong> ${drink.strCategory}<br>
    <strong>Alcoholic:</strong> ${drink.strAlcoholic}<br>
    <strong>Glass:</strong> ${drink.strGlass}<br>
    <strong>Instructions:</strong> ${drink.strInstructions}<br>
    <strong>Ingredient 1:</strong> ${drink.strIngredient1 || 'N/A'}
  `;
  document.getElementById('overlay').classList.add('show');
  document.getElementById('modal').classList.add('show');
};

const closeModal = () => {
  document.getElementById('overlay').classList.remove('show');
  document.getElementById('modal').classList.remove('show');
};

window.onload = loadAllProduct;
