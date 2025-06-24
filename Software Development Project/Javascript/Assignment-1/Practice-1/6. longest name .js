const checkFriends = (array) => {
    let biggestName = array[0];

    for (let i = 1; i < array.length; i++) {
        const element = array[i];
        if (element.length > biggestName.length) {
            biggestName = element;
        }
    }

    return biggestName;
};

const friends = ["rahim", "karim", "abdul", "sadsd", "heroAlom"];
const longestFriend = checkFriends(friends);

console.log("Longest name:", longestFriend);
