#ifndef INCLUDED_haxe_ui_containers_properties__Property_LabelBehaviour
#define INCLUDED_haxe_ui_containers_properties__Property_LabelBehaviour

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <haxe/ui/behaviours/DefaultBehaviour.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,behaviours,Behaviour)
HX_DECLARE_CLASS3(haxe,ui,behaviours,DefaultBehaviour)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,HBox)
HX_DECLARE_CLASS4(haxe,ui,containers,properties,Property)
HX_DECLARE_CLASS5(haxe,ui,containers,properties,_Property,LabelBehaviour)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IDataComponent)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace containers{
namespace properties{
namespace _Property{


class HXCPP_CLASS_ATTRIBUTES LabelBehaviour_obj : public  ::haxe::ui::behaviours::DefaultBehaviour_obj
{
	public:
		typedef  ::haxe::ui::behaviours::DefaultBehaviour_obj super;
		typedef LabelBehaviour_obj OBJ_;
		LabelBehaviour_obj();

	public:
		enum { _hx_ClassId = 0x09ebf87e };

		void __construct( ::haxe::ui::containers::properties::Property property);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.properties._Property.LabelBehaviour")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.properties._Property.LabelBehaviour"); }
		static ::hx::ObjectPtr< LabelBehaviour_obj > __new( ::haxe::ui::containers::properties::Property property);
		static ::hx::ObjectPtr< LabelBehaviour_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::properties::Property property);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LabelBehaviour_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LabelBehaviour",c9,f9,55,33); }

		 ::haxe::ui::containers::properties::Property _property;
		void set( ::haxe::ui::util::VariantType value);

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace properties
} // end namespace _Property

#endif /* INCLUDED_haxe_ui_containers_properties__Property_LabelBehaviour */ 
