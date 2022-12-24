#ifndef INCLUDED_haxe_ui_containers_properties_Property
#define INCLUDED_haxe_ui_containers_properties_Property

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,HBox)
HX_DECLARE_CLASS4(haxe,ui,containers,properties,Property)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IDataComponent)
HX_DECLARE_CLASS3(haxe,ui,data,DataSource)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace containers{
namespace properties{


class HXCPP_CLASS_ATTRIBUTES Property_obj : public  ::haxe::ui::containers::HBox_obj
{
	public:
		typedef  ::haxe::ui::containers::HBox_obj super;
		typedef Property_obj OBJ_;
		Property_obj();

	public:
		enum { _hx_ClassId = 0x26975d74 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.properties.Property")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.properties.Property"); }
		static ::hx::ObjectPtr< Property_obj > __new();
		static ::hx::ObjectPtr< Property_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Property_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("Property",75,04,ea,85); }

		void registerComposite();

		void registerBehaviours();

		::String get_label();
		::Dynamic get_label_dyn();

		::String set_label(::String value);
		::Dynamic set_label_dyn();

		::String get_type();
		::Dynamic get_type_dyn();

		::String set_type(::String value);
		::Dynamic set_type_dyn();

		 ::haxe::ui::data::DataSource get_dataSource();
		::Dynamic get_dataSource_dyn();

		 ::haxe::ui::data::DataSource set_dataSource( ::haxe::ui::data::DataSource value);
		::Dynamic set_dataSource_dyn();

		 ::Dynamic get_step();
		::Dynamic get_step_dyn();

		 ::Dynamic set_step( ::Dynamic value);
		::Dynamic set_step_dyn();

		 ::Dynamic get_min();
		::Dynamic get_min_dyn();

		 ::Dynamic set_min( ::Dynamic value);
		::Dynamic set_min_dyn();

		 ::Dynamic get_max();
		::Dynamic get_max_dyn();

		 ::Dynamic set_max( ::Dynamic value);
		::Dynamic set_max_dyn();

		 ::Dynamic get_precision();
		::Dynamic get_precision_dyn();

		 ::Dynamic set_precision( ::Dynamic value);
		::Dynamic set_precision_dyn();

		 ::haxe::ui::core::ComponentContainer cloneComponent();

		 ::haxe::ui::core::ComponentContainer self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace properties

#endif /* INCLUDED_haxe_ui_containers_properties_Property */ 
