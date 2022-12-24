#ifndef INCLUDED_haxe_ui_containers_properties__Property_DataSourceBehaviour
#define INCLUDED_haxe_ui_containers_properties__Property_DataSourceBehaviour

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
HX_DECLARE_CLASS5(haxe,ui,containers,properties,_Property,DataSourceBehaviour)
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


class HXCPP_CLASS_ATTRIBUTES DataSourceBehaviour_obj : public  ::haxe::ui::behaviours::DefaultBehaviour_obj
{
	public:
		typedef  ::haxe::ui::behaviours::DefaultBehaviour_obj super;
		typedef DataSourceBehaviour_obj OBJ_;
		DataSourceBehaviour_obj();

	public:
		enum { _hx_ClassId = 0x704aeaab };

		void __construct( ::haxe::ui::containers::properties::Property property);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.properties._Property.DataSourceBehaviour")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.properties._Property.DataSourceBehaviour"); }
		static ::hx::ObjectPtr< DataSourceBehaviour_obj > __new( ::haxe::ui::containers::properties::Property property);
		static ::hx::ObjectPtr< DataSourceBehaviour_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::properties::Property property);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DataSourceBehaviour_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DataSourceBehaviour",b8,56,e9,88); }

		 ::haxe::ui::containers::properties::Property _property;
		 ::haxe::ui::util::VariantType get();

		void set( ::haxe::ui::util::VariantType value);

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace properties
} // end namespace _Property

#endif /* INCLUDED_haxe_ui_containers_properties__Property_DataSourceBehaviour */ 
