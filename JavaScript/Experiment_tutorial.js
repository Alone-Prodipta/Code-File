/*_________________________________________________BASICS____________________________________________*/

// console.log("Prodipta");
// let a=10;
// let sum=a+50;
// console.log(typeof(sum));
// console.log(sum);
/*************************************************************** */
//cont is used in declaring constants and let is used in decclaring variable

const account_id= 15554;
var account_email= "pnayeb2006@gmail.com";
var password= "1253";
let city= "Bagbazar";
//account_id= 10;//not allowed.

/*******var & let are used in variable declaration.
thier was a problem regarding the block & function scope in programming 
so the specialist told that use only let and forget var.********/

//console.log(account_id);

account_email= "pnayeb@gmail.com";
// console.log(city);
// console.log(account_email);
// console.log(password);

//prints everything in the format of a table.
            //console.table([account_id,account_email,password,city]);

//if nothing is defined then the return type is undefined.
let name;
            //console.log(typeof(name));
/************************************************************/
let temp= null;
//null is a standalone Value. it is an object.
//symbol=>unique
//undefined.(it is a type of variable which is 'undefined') return type is object.
//objects.
/************************************************************/
/*conversion*/
let value= undefined;      //mind with null, undefined,NaN.
                //console.log(typeof(value));
let amt= "50";
                //console.log(typeof (amt));
let value_num= Number(amt);//syntax of conversion from string to number.
                //console.log(typeof(value_num)); 

//NaN => Not A Number it is a special type.  example:"33adc" it will show number type but it is nan type.

let line= 36;
let num_line=String(line);//syntax of conversion from number to string.
                //console.log(typeof(num_line));
                //console.log(num_line);

/************************************************************/
/*operation*/
let a= 4**3;//power operator in java script.
/************************************************************/
/*comparision*/
//=== ->It not only checks the value, but also it checks the data type of the value. it is a strict check.

                    //console.log("5"===5);
//if we give == then it show ture, otherwise in case of === it shows false.

                    //console.log("9"=="9");
//if we give == then it show ture, also in case of === it shows true.

/************************************************************/
/*stack & heap*/
/* memory------------->Stack.(stores primitive data, we get a copy of a varible )
    |
    |------------------->Heap.(stores non-primitive data, we get to see the change in the original value)*/
//code written under this comment will get stored in stack.
    let identity= "Prodipta";
let dup_identity= identity;
//console.log(dup_identity);
dup_identity= "Prodipta Nayeb";
//console.log(dup_identity);

//creating an object this will get stored in heap.
let od={
    food: "Burger",
    city: "Kolkata",
    lane: "Nabakrishna roy lane",
    number: 70
};
let ob= od;
od.food="Biriyani";
            //console.log(od.food);
            //console.log(ob.food);
/**************************************************************************/
//Dates

/* .....................date is an object in javascript.......................*/


let mydate = new Date();
//console.log(typeof(mydate));
//console.log(mydate.toString());
//console.log(mydate.toDateString());
//console.log(mydate.toLocaleString());   //This is the local format of date and time.

let date1= new Date(2025,0,14);
//console.log(date1.toDateString());
//Month starts from 0 to 11.0->January, 1->February and so on.
let date2= new Date("2025-01-10");
//console.log(date2.toLocaleString());
let time=Date.now();
//console.log(time);
//console.log(date2.getTime());
//console.log(Math.floor(Date.now()/Math.pow(10,9)));
//console.log(mydate.getMonth());//print month number starting from 0.
//console.log(mydate.getDay());//print day number starting from 0(Sunday).
mydate.toLocaleString('default',{weekend:"long"});

/**************************************************************************/
//Arrays

const ar= [1,7,9,2,3];

/****************Methods*******************/
//push() -->add element in the last

ar.push(10);
//console.log(ar);

//pop() --> remove the last element

ar.pop();
//console.log(ar);

//unshift() --> add element in the starting

ar.unshift(10);
ar.shift();
//console.log(ar);

//includes() --> Checks whether an element is included in the array list or not.
//console.log(ar.includes(7));    //Boolean type function.

//indexOf() --> prints the index number of an element in the array.
//if the element is not present it returns -1.

//console.log(ar.indexOf(10));

//join() --> converts or add all the element of an array into a string.
const ar2 = ar.join();
//console.log(ar);
//console.log(ar2);
//console.log(typeof(ar2));

//Slice -->

//console.log("A ",ar);
const arr1= ar.slice(1,3);
//console.log(arr1);
//console.log("B ",ar);

//Splice -->

const arr2= ar.splice(1,3);
//console.log(arr2);
//console.log("C ",ar);

/**************************************************************************/
//objects


/* declaring symbols*/

const sym= Symbol("key1");

const user={
    "name": "Aheri halder",//    or   name:"Aheri halder"
    [sym]: "pro",
    age: 15,
    location: "pnayeb@king.com",
    is_logged_in: "true"
};
// console.log(user.name);       //Accessing values of object members
// console.log(user["age"]);    //Accessing values of object members in another way
// console.log(user[sym]);
// console.log(typeof(user[sym]));


/* Function are treated as variables*/
user.greeting= function()
{
    console.log("MY NAME IS PRODIPTA");
}
user.func2= function()
{
    console.log('nayeb, ${this,name}');
}
//console.log(user.greeting);
//console.log(user.func2);

/* singleton */

const fan1={};
fan1.name= "havels",
fan1.price= "5000",
fan1.is_logged_in= true

//console.log(fan1);

const facebook={
    email:"pnayeb@gmail.com",
    details:
    {
        user: "Swapnesh bose",
        id: 20241086,
        contact: 91233660334,
    }
}
//console.log(facebook.details.id);

/* combining of two objects */
// const join= {facebook,user};   // not much beneficial.
const join=Object.assign({},facebook,user);//{}(empty object is the target object)
const join1={...facebook, ...user};// very much helpful(spread(...) operator)
          //console.log(join);


/**************************************************************************/
//function

//defination of function.
function fun(num1,num2,...val1)
{
    //write the body of the function.
    return val1;
}

//execution of function
         //console.log(fun(200,300,800,500));

function add(n1,n2)
{
    //console.log(n1+n2);
    let val= n1+n2;
    return val;
}
const result= add(4,3);
//console.log("Result: ",result);

function message(name= "sam")
{
    if(name== undefined)
    {
        console.log("Please enter a username");
        return;
    }
    return `${name} just logged in`; //string interpulation
}

//console.log(message());

/**************************************************************************/
//This operator& arrow() function

const customer={
    name: "Aheri halder",
    price: 5500,
    welcomemsg: function()
    {
        console.log(`${this.name} ,welcome to the website`);   //This keyword is used to refer the current context.

    }
}
// customer.welcomemsg();
// customer.name= "Anushrita";
// customer.welcomemsg();
          //console.log(this);


// function one()
// {
//     person= "Ambika";
//     console.log(this.person);
// }

// one();

/*********Arrow() function********/

// const one= ()=>{
//     person= "Ambika";
//     console.log(this);
// }

const one= (n1,n2)=> {
    return (n1+n2);    
}

/* alternative syntax---> const one= (n1,n2)=> (n1,n2); */
/**for this we donot need to put return statement 
and do not need to use scope */

            //console.log(one(3,4));

/**************************************************************************/
//IIFE() function-->used for avoiding the issues in global scope pollution.It function get executed immediatly.

/**(function lol()
 * {
 *      body of function.
 * })();
 * It is mandatotary to put semicolon';' at the end of the declaration.
 * put the function defination within a parenthesis.*/

/**************************************************************************/
//High Oder Array loops

const lst= [1, 2, 3, 4, 5];
/*for(const iterator of objects)        //forof() loop
{
    /**objects means on which dataype we are appling the loop not in objets in java or c++.
     * iterartor is the variable name.**/

//}


const game_name= {
    "spt1": "cricket",
    "spt2": "football",    
    "spt3": "chess",
    "spt4": "basketball",
    "spt5": "golf",
    "spt6": "athletics",
}

/*for(const [game,value] of game_name)
{
    console.log(game);      //forof() loop doesnot work for object iteration, but map() works very smoothly.
}*/

for(const key in game_name)         //forin() loop
{
    //console.log(`${key} is for ${game_name[key]}`);
}

for(const game in lst)
{
    //console.log(`${game} = ${lst[game]}`);
}
const dishes=["biriyani","panfried chicken","butter garlic chicken","chicken cafrial"];
dishes.forEach(function greeting(item)
{
    //console.log(item);
});
dishes.forEach((item, index, arr)=> 
{
    console.log(item, index, arr);
});


/*_________________________________________________END OF BASICS____________________________________________*/

/**************************************************************************/
//DOM manipulation & NodeList..(Document Object Model)

/*how to select some indivisual elements of HTML.*/
/**
 * =>document.getElementById("id_name");
 * =>variable_name.innerHTML-->display the full syntax written within the attributes along with the tags.
 * =>variable_name.textContent -->display the invisible content of the attributes
 * =>variable_name.Text -->display only the visible text or content of the attributes
 * =>document.getElementByClassName("class_name");
 * =>documnet.getElementByClassname("class_name","new_class_name");  -->the initial class name will get overwrite by the second name.
 * =>documnet.querySelectors("HTML_element _name"); -->selects the specific element name
 * =>variable_name.Style.Css_Styling_Name="value";  -->used for styling the elements
 * =>const king= document.getElementById("id_name");-->string the function within a single a single variable.
 * =>document.querySelectorAll("element_name");
 * =>Array.from("variable_name"); -->converts html values collections in an array format.
 * =>document.createElement("element_name"); -->creates a new HTML element.
 * =>parent_element.appendChild("new_element"); -->appends the new element within the parent element.
 * =>document.addEventListener("event_name", function_name); -->used to add event listeners to HTML elements, used in hover effects & functionalities.
 *   */

