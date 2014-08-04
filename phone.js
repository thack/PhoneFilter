angular.module('filter', []);

angular.module('filter').filter('phonenumber', function() {
    return function(input) {
        input = input || '';
        var digits = input.replace(/^\d/g, '');
        return '(' + digits.substr(0, 3) + ') ' + digits.substr(3, 3) + '-' + digits.substr(6, 4);
    };
});
