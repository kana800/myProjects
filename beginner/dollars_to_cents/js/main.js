// convert dollar to decimal and "alert" the answer
function DollarToCoins(number)
{
    number = number * 100;
    let penny, nickel, dime, quarter, balance;
    quarter = Math.floor(number / 25);
    balance = number % 25;
    dime = Math.floor(balance / 10);
    balance = balance % 10;
    nickel = Math.floor(balance / 5);
    balance = balance % 5;
    penny = Math.floor(balance / 1);
    let s = "Quarters: " + quarter + "\nDimes: " + dime + "\nNickels: " + nickel + "\nPennies: " + penny;
    alert(s);
    return s;
};

function validateForm()
{
    let x = document.getElementById("dollar").value;
    if (x == "")
    {
        alert("input is empty")
        return false;
    }
    let dollarAmt = document.getElementById("dollar").value;
    DollarToCoins(dollarAmt);
};