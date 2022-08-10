using System;
namespace HW1
{
    struct Article
    {
        public enum ArticleType
        {
            Foods, Clothes, Furniture
        };
        public static int ID;
        private string name;
        private int price;
    }

    struct Client
    {
        public enum ClientType
        {
            Very_Good, Good, Normal, Bad, Very_Bad
        };
        public static int ID;
        private string name_surname;
        private string adress;
        private int phone;
        private int num_of_orders;
        private int sum_of_orders;
    }

    struct RequestItem
    {
        private string product;
        private int num_of_product;
    }

    struct Request
    {
        public enum PayType
        {
            Cash, Check, Credit
        };
        private int order_code;
        private string client_name;
        private string date;
        private string item;
        public int Sum { get;}
    }
}
