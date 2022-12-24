#ifndef INCLUDED_haxe_ui_containers_properties__PropertyGroup_Builder
#define INCLUDED_haxe_ui_containers_properties__PropertyGroup_Builder

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
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,Grid)
HX_DECLARE_CLASS3(haxe,ui,containers,HBox)
HX_DECLARE_CLASS3(haxe,ui,containers,VBox)
HX_DECLARE_CLASS4(haxe,ui,containers,properties,Property)
HX_DECLARE_CLASS4(haxe,ui,containers,properties,PropertyGroup)
HX_DECLARE_CLASS5(haxe,ui,containers,properties,_PropertyGroup,Builder)
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
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace containers{
namespace properties{
namespace _PropertyGroup{


class HXCPP_CLASS_ATTRIBUTES Builder_obj : public  ::haxe::ui::core::CompositeBuilder_obj
{
	public:
		typedef  ::haxe::ui::core::CompositeBuilder_obj super;
		typedef Builder_obj OBJ_;
		Builder_obj();

	public:
		enum { _hx_ClassId = 0x1790b661 };

		void __construct( ::haxe::ui::containers::properties::PropertyGroup propertyGroup);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.properties._PropertyGroup.Builder")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.properties._PropertyGroup.Builder"); }
		static ::hx::ObjectPtr< Builder_obj > __new( ::haxe::ui::containers::properties::PropertyGroup propertyGroup);
		static ::hx::ObjectPtr< Builder_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::properties::PropertyGroup propertyGroup);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Builder_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Builder",fb,02,0c,3d); }

		 ::haxe::ui::containers::properties::PropertyGroup _propertyGroup;
		 ::haxe::ui::containers::HBox _propertyGroupHeader;
		 ::haxe::ui::containers::Grid _propertyGroupContents;
		 ::haxe::ds::ObjectMap _editorMap;
		void onReady();

		void create();

		 ::haxe::ui::core::Component addComponent( ::haxe::ui::core::Component child);

		void onPropertyShown( ::haxe::ui::events::UIEvent event);
		::Dynamic onPropertyShown_dyn();

		void onPropertyHidden( ::haxe::ui::events::UIEvent event);
		::Dynamic onPropertyHidden_dyn();

		void onPropertyEnabled( ::haxe::ui::events::UIEvent event);
		::Dynamic onPropertyEnabled_dyn();

		void onPropertyDisabled( ::haxe::ui::events::UIEvent event);
		::Dynamic onPropertyDisabled_dyn();

		void onPropertyEditorChange( ::haxe::ui::events::UIEvent event);
		::Dynamic onPropertyEditorChange_dyn();

		 ::haxe::ui::core::Component buildEditor( ::haxe::ui::containers::properties::Property property);
		::Dynamic buildEditor_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace properties
} // end namespace _PropertyGroup

#endif /* INCLUDED_haxe_ui_containers_properties__PropertyGroup_Builder */ 
