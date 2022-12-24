#ifndef INCLUDED_haxe_ui_layouts_VirtualLayout
#define INCLUDED_haxe_ui_layouts_VirtualLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_layouts_ScrollViewLayout
#include <haxe/ui/layouts/ScrollViewLayout.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,ItemRenderer)
HX_DECLARE_CLASS3(haxe,ui,data,DataSource)
HX_DECLARE_CLASS3(haxe,ui,layouts,DefaultLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,ILayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,Layout)
HX_DECLARE_CLASS3(haxe,ui,layouts,ScrollViewLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,VirtualLayout)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace layouts{


class HXCPP_CLASS_ATTRIBUTES VirtualLayout_obj : public  ::haxe::ui::layouts::ScrollViewLayout_obj
{
	public:
		typedef  ::haxe::ui::layouts::ScrollViewLayout_obj super;
		typedef VirtualLayout_obj OBJ_;
		VirtualLayout_obj();

	public:
		enum { _hx_ClassId = 0x3f873786 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.layouts.VirtualLayout")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.layouts.VirtualLayout"); }
		static ::hx::ObjectPtr< VirtualLayout_obj > __new();
		static ::hx::ObjectPtr< VirtualLayout_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VirtualLayout_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VirtualLayout",f5,aa,c5,17); }

		int _firstIndex;
		int _lastIndex;
		::Array< ::Dynamic> _rendererPool;
		::Array< Float > _sizeCache;
		 ::haxe::ui::core::Component contents;
		 ::haxe::ui::core::Component get_contents();
		::Dynamic get_contents_dyn();

		 ::haxe::ui::data::DataSource get_dataSource();
		::Dynamic get_dataSource_dyn();

		Float itemWidth;
		Float get_itemWidth();
		::Dynamic get_itemWidth_dyn();

		bool _firstPass;
		Float itemHeight;
		Float get_itemHeight();
		::Dynamic get_itemHeight_dyn();

		int itemCount;
		int get_itemCount();
		::Dynamic get_itemCount_dyn();

		void refresh();

		void refreshData();
		::Dynamic refreshData_dyn();

		 ::haxe::ui::core::ItemRenderer _lastItemRenderer;
		void refreshNonVirtualData();
		::Dynamic refreshNonVirtualData_dyn();

		void refreshVirtualData();
		::Dynamic refreshVirtualData_dyn();

		virtual void calculateRangeVisible();
		::Dynamic calculateRangeVisible_dyn();

		virtual void updateScroll();
		::Dynamic updateScroll_dyn();

		virtual ::hx::Class itemClass(int index, ::Dynamic data);
		::Dynamic itemClass_dyn();

		 ::haxe::ui::core::ItemRenderer getRenderer(::hx::Class cls,int index);
		::Dynamic getRenderer_dyn();

		void removeRenderer( ::haxe::ui::core::ItemRenderer renderer,::hx::Null< bool >  dispose);
		::Dynamic removeRenderer_dyn();

		void removeInvisibleRenderers();
		::Dynamic removeInvisibleRenderers_dyn();

		bool isRendererVisible( ::haxe::ui::core::Component renderer);
		::Dynamic isRendererVisible_dyn();

		bool isIndexVisible(int index);
		::Dynamic isIndexVisible_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace layouts

#endif /* INCLUDED_haxe_ui_layouts_VirtualLayout */ 
