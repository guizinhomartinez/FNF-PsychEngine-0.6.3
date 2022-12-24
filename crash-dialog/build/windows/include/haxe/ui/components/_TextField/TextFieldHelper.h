#ifndef INCLUDED_haxe_ui_components__TextField_TextFieldHelper
#define INCLUDED_haxe_ui_components__TextField_TextFieldHelper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,components,TextField)
HX_DECLARE_CLASS4(haxe,ui,components,_TextField,TextFieldHelper)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IValueComponent)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{
namespace _TextField{


class HXCPP_CLASS_ATTRIBUTES TextFieldHelper_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TextFieldHelper_obj OBJ_;
		TextFieldHelper_obj();

	public:
		enum { _hx_ClassId = 0x7ca7dad1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.components._TextField.TextFieldHelper")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.components._TextField.TextFieldHelper"); }

		inline static ::hx::ObjectPtr< TextFieldHelper_obj > __new() {
			::hx::ObjectPtr< TextFieldHelper_obj > __this = new TextFieldHelper_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< TextFieldHelper_obj > __alloc(::hx::Ctx *_hx_ctx) {
			TextFieldHelper_obj *__this = (TextFieldHelper_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextFieldHelper_obj), false, "haxe.ui.components._TextField.TextFieldHelper"));
			*(void **)__this = TextFieldHelper_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextFieldHelper_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextFieldHelper",fb,35,13,1b); }

		static void validateText( ::haxe::ui::components::TextField textfield,::String text);
		static ::Dynamic validateText_dyn();

		static void validateHtmlText( ::haxe::ui::components::TextField textfield,::String htmlText);
		static ::Dynamic validateHtmlText_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _TextField

#endif /* INCLUDED_haxe_ui_components__TextField_TextFieldHelper */ 
