


struct contact_person
{
    int person_id;
    char *firstname;
    char *lastname;
    char *email;
};

struct contact
{
    int contact_id;
    char *name;
    char *street;
    char *area;
    char *city;
    struct contact_person *cprson;
}c[2];
