<!DOCTYPE html>
<html>
    <head>
        <style>
            body
            {
                background-color: black;
                font-family: Arial, Helvetica, sans-serif;
            }
            .calculator
            {
                color: white;
                background-color: black;
                
                height: 400px;
                width: 350px;
                margin-left: 600px;
            }

            .result
            {
                font-size: 34px;
                margin-top: 10px;
                margin-bottom: 10px;
                margin-left: 5px;
            }

            .maths-button
            {
                height: 60px;
                width: 60px;
                border-radius: 30px;
                background-color: rgb(51, 51, 51);
                color: white;
                font-size: 25px;
                border: none;
                margin-left: 5px;
                margin-right: 2px;
                cursor: pointer;
            }
            .operator-button
            {
                height: 60px;
                width: 60px;
                border-radius: 30px;
                background-color: rgb(254, 160, 10);
                color: white;
                font-size: 25px;
                border: none;
                margin-left: 5px;
                margin-right: 2px;
                cursor: pointer;
            }

            .clear-button
            {
                height: 60px;
                width: 60px;
                border-radius: 30px;
                background-color: rgb(51, 51, 51);
                color: white;
                font-size: 17px;
                border: none;
                margin-left: 5px;
                margin-right: 2px;
                cursor: pointer;
            }
        </style>
    </head>
    <body>
        <div class="calculator">
            <p class="result">
                
            </p>
            <p>
                <button class="maths-button"
                onclick="calculation+='1';
                displaycalculation();">
                    1
                </button>
                <button class="maths-button"
                onclick="calculation+='2'
                displaycalculation();">
                    2
                </button>
                <button class="maths-button"
                onclick="calculation+='3'
                displaycalculation();">
                    3
                </button>
                <button class="operator-button"
                onclick="calculation+=' + ';
                displaycalculation();">
                    +
                </button>
            </p>

            <p>
               <button class="maths-button"
                onclick="calculation+='4';
                displaycalculation();">
                    4
                </button>
                <button class="maths-button"
                onclick="calculation+='5'
                displaycalculation();">
                    5
                </button>
                <button class="maths-button"
                onclick="calculation+='6';
                displaycalculation();"
                >
                    6
                </button>
                <button class="operator-button"
                onclick="calculation+=' - ';
                displaycalculation();">
                    -
                </button> 
            </p>

            <p>
                <button class="maths-button"
                onclick="calculation+='7';
                displaycalculation();">
                    7
                </button>
                <button class="maths-button"
                onclick="calculation+='8'
                displaycalculation();">
                    8
                </button>
                <button class="maths-button"
                onclick="calculation+='9';
                displaycalculation();
                ">
                    9
                </button>
                <button class="operator-button"
                onclick="calculation+=' * ';
                displaycalculation();">
                    *
                </button>


            </p>

            <p>
                <button class="maths-button"
                onclick="calculation+='0';
                displaycalculation();">
                    0
                </button>
                <button class="maths-button"
                onclick="calculation+='.'
                displaycalculation();">
                    .
                </button>
                <button class="maths-button"
                onclick="calculation=eval(calculation);
                displaycalculation();">
                    =
                </button>
                <button class="operator-button"
                onclick="calculation+=' / ';
                displaycalculation();">
                    /
                </button>
            </p>

            <p>
               <button class="clear-button"
                onclick="calculation=' ';
                displaycalculation();">
                    clear
                </button> 
            </p>
        </div>

        <script>
            let calculation='';
            function displaycalculation()
            {
                document.querySelector('.result').innerHTML=calculation;
            }
        </script>
    </body>
</html>
