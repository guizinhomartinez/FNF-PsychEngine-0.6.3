#ifndef INCLUDED_haxe_ui_backend_hxwidgets_builders_PropertyGridBuilder
#define INCLUDED_haxe_ui_backend_hxwidgets_builders_PropertyGridBuilder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <haxe/ui/core/CompositeBuilder.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS5(haxe,ui,backend,hxwidgets,builders,PropertyGridBuilder)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,HBox)
HX_DECLARE_CLASS3(haxe,ui,containers,VBox)
HX_DECLARE_CLASS4(haxe,ui,containers,properties,Property)
HX_DECLARE_CLASS4(haxe,ui,containers,properties,PropertyGroup)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,CompositeBuilder)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IDataComponent)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)
HX_DECLARE_CLASS2(hx,widgets,Event)

namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace builders{


class HXCPP_CLASS_ATTRIBUTES PropertyGridBuilder_obj : public  ::haxe::ui::core::CompositeBuilder_obj
{
	public:
		typedef  ::haxe::ui::core::CompositeBuilder_obj super;
		typedef PropertyGridBuilder_obj OBJ_;
		PropertyGridBuilder_obj();

	public:
		enum { _hx_ClassId = 0x7a74823f };

		void __construct( ::haxe::ui::core::Component component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.hxwidgets.builders.PropertyGridBuilder")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.hxwidgets.builders.PropertyGridBuilder"); }
		static ::hx::ObjectPtr< PropertyGridBuilder_obj > __new( ::haxe::ui::core::Component component);
		static ::hx::ObjectPtr< PropertyGridBuilder_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PropertyGridBuilder_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PropertyGridBuilder",80,5e,27,51); }

		::Array< ::Dynamic> _groups;
		 ::haxe::ds::ObjectMap _propertyMap;
		 ::haxe::ui::core::Component addComponent( ::haxe::ui::core::Component child);

		void onReady();

		void onPropertyChanged( ::hx::widgets::Event event);
		::Dynamic onPropertyChanged_dyn();

		 ::Dynamic findComponent(::String criteria,::hx::Class type, ::Dynamic recursive,::String searchType);

		void convertValue( ::haxe::ui::containers::properties::Property item,::String v);
		::Dynamic convertValue_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace builders

#endif /* INCLUDED_haxe_ui_backend_hxwidgets_builders_PropertyGridBuilder */ 
