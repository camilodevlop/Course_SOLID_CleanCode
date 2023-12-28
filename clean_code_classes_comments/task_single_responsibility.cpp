#include <iostream>

using namespace std;

//------------------------------------------------------------------------------

enum class HtmlType { Input, Select, Textarea, Radio };

//------------------------------------------------------------------------------

class HtmlElement {
    public:
        string mId;
        HtmlType mType;

    HtmlElement(string id, HtmlType type): mId{id}, mType{type} {}

    ~HtmlElement() {}
};

//------------------------------------------------------------------------------

class InputAttributes {
    public:
        string mValue;
        string mPlaceholder;

    InputAttributes(string value, string placeholder): mValue{value},
                                                    mPlaceholder{placeholder} {}

    ~InputAttributes() {}
};

//------------------------------------------------------------------------------

class InputEvents {
    public:
        InputEvents() {};

        void setFocus(InputAttributes &inputAttributes)
        { inputAttributes.mValue = "focused"; }

        bool isActive(HtmlElement &htmlElement)
        { return ~(htmlElement.mId == ""); }

    ~InputEvents() {}
};

//------------------------------------------------------------------------------

class InputElement
{
    public:
        HtmlElement mHtmlElement;
        InputAttributes mInputAttributes;
        InputEvents mInputEvents;

        InputElement(string value, string placeholder, string id = string()):
                     mHtmlElement{id, HtmlType::Input},
                     mInputAttributes{value, placeholder},
                     mInputEvents{InputEvents()} {} 

        ~InputElement() {}
};

//------------------------------------------------------------------------------

int main() {

    InputElement inputElement("14", "activate", "Camilo");
    inputElement.mInputEvents.setFocus(inputElement.mInputAttributes);

    return 0;
}

//------------------------------------------------------------------------------
