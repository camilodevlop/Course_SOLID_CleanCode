#include <iostream>

int main()
{
    std::cout << "\n\tTech Debt - Clean Code\n\n\t";
    
    std::cout << "Exercise: choose suitable variable names.\n\n\t";
    std::cout << "const today = new Date()\n\t";
    std::cout << "const elapsed_days: number = 23\n\t";
    std::cout << "const files_in_directory = 33\n\t";
    std::cout << "const first_name = Camilo\n\t";
    std::cout << "const last_name = Castillo\n\t";
    std::cout << "const last_day_of_modification = 12\n\t";
    std::cout << "const max_classes_per_student = 6\n\n";

//------------------------------------------------------------------------------

    std::cout << "\n\tExercise: choose suitable names according to the type.\n\n\t";
    std::cout << "const celsius_temps = [33.6, 12.34]\n\t";
    std::cout << "const server_ip = 123.123.123.123\n\t";
    std::cout << "const users = [{id: 1, email: 'camilo@gmail.com'}, {id: 2, email: 'lina@gmail.com'}]\n\t";
    std::cout << "const user_emails = users.map( user => user.email )\n\t";
    std::cout << "can_jumping = false\n\t";
    std::cout << "can_running = true\n\t";
    std::cout << "has_items = false\n\t";
    std::cout << "is_loading = false\n\t";
    std::cout << "initial_time = new Date().getTime()\n\t";
    std::cout << "time_elapsed = new Date().getTime() - initial_time\n\t";
    std::cout << "function get_books()\n\t";
    std::cout << "function get_books_by_url()\n\t";
    std::cout << "function calculate_square_area(float side)\n\t";
    std::cout << "function print_job()\n\t";

//------------------------------------------------------------------------------

    std::cout << "\n\tExercise: choose suitable names for the functions.\n\n\t";
    std::cout << "function get_movie_by_id(id: string)\n\t";
    std::cout << "function get_movie_actors_by_id(id: string)\n\t";
    std::cout << "function get_actor_bio_by_id(id: string)\n\t";
    std::cout << "object movie{title, description, rating, cast}\n\t";
    std::cout << "function create_movie(new_movie: movie{})\n\t";
    std::cout << "function create_actor(fullname: string, birthdate: Date)\n\t";

//------------------------------------------------------------------------------

    /*
    (() => {


    // Resolver sin la triple condicional dentro del if
    // includes? arrays?
    function isRedFruit( fruit: string ): boolean {

        const redFruits = ['manzana','cereza','ciruela'];
        return redFruits.includes(fruit))
    }

    // Simplificar esta función
    // switch? Object literal? validar posibles colores
    function getFruitsByColor( color: string ): string[] {

        switch(color)
        {
            case 'red':    return ['manzana','fresa'];
            case 'yellow': return ['piña', 'banana'];
            case 'purple': return ['moras','uvas']
            default:
                throw Error('the color must be: red, yellow, purple');
        }
    }

    // Simplificar esta función
    let isFirstStepWorking  = true;
    let isSecondStepWorking = true;
    let isThirdStepWorking  = true;
    let isFourthStepWorking = true;

    function workingSteps() {

        if( ~isFirstStepWorking)    return 'First step broken.';
        if( ~isSecondStepWorking )  return 'Second step broken.';
        if( ~isThirdStepWorking )   return 'Third step broken.';
        if( ~isFourthStepWorking )  return 'Fourth step broken.';

        return 'Working properly!';
    }


    // isRedFruit
    console.log({ isRedFruit: isRedFruit('cereza'), fruit: 'cereza' }); // true
    console.log({ isRedFruit: isRedFruit('piña'), fruit: 'piña' }); // true

    //getFruitsByColor
    console.log({ redFruits: getFruitsByColor('red') }); // ['manzana', 'fresa']
    console.log({ yellowFruits: getFruitsByColor('yellow') }); // ['piña', 'banana']
    console.log({ purpleFruits: getFruitsByColor('purple') }); // ['moras', 'uvas']
    // console.log({ pinkFruits: getFruitsByColor('pink') }); // Error: the color must be: red, yellow, purple

    // workingSteps
    console.log({ workingSteps: workingSteps() }); // Cambiar los valores de la línea 31 y esperar los resultados


    })();
    */
//------------------------------------------------------------------------------

    return 0;

}
