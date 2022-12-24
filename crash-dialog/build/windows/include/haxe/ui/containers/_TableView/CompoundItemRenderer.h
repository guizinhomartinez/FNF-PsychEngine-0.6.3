#ifndef INCLUDED_haxe_ui_containers__TableView_CompoundItemRenderer
#define INCLUDED_haxe_ui_containers__TableView_CompoundItemRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#include <haxe/ui/core/ItemRenderer.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS4(haxe,ui,containers,_TableView,CompoundItemRenderer)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,ItemRenderer)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace containers{
namespace _TableView{


class HXCPP_CLASS_ATTRIBUTES CompoundItemRenderer_obj : public  ::haxe::ui::core::ItemRenderer_obj
{
	public:
		typedef  ::haxe::ui::core::ItemRenderer_obj super;
		typedef CompoundItemRenderer_obj OBJ_;
		CompoundItemRenderer_obj();

	public:
		enum { _hx_ClassId = 0x67752b21 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers._TableView.CompoundItemRenderer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers._TableView.CompoundItemRenderer"); }
		static ::hx::ObjectPtr< CompoundItemRenderer_obj > __new();
		static ::hx::ObjectPtr< CompoundItemRenderer_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CompoundItemRenderer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CompoundItemRenderer",a1,81,df,d5); }

		void onDataChanged( ::Dynamic data);

		void registerBehaviours();

		 ::haxe::ui::core::ComponentContainer cloneComponent();

		 ::haxe::ui::core::ComponentContainer self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TableView

#endif /* INCLUDED_haxe_ui_containers__TableView_CompoundItemRenderer */ 
