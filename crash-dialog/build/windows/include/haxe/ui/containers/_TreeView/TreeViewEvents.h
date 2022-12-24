#ifndef INCLUDED_haxe_ui_containers__TreeView_TreeViewEvents
#define INCLUDED_haxe_ui_containers__TreeView_TreeViewEvents

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_containers_ScrollViewEvents
#include <haxe/ui/containers/ScrollViewEvents.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,containers,ScrollView)
HX_DECLARE_CLASS3(haxe,ui,containers,ScrollViewEvents)
HX_DECLARE_CLASS3(haxe,ui,containers,TreeView)
HX_DECLARE_CLASS4(haxe,ui,containers,_TreeView,TreeViewEvents)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IDataComponent)
HX_DECLARE_CLASS3(haxe,ui,core,IScrollView)
HX_DECLARE_CLASS3(haxe,ui,core,IValueComponent)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,events,Events)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace containers{
namespace _TreeView{


class HXCPP_CLASS_ATTRIBUTES TreeViewEvents_obj : public  ::haxe::ui::containers::ScrollViewEvents_obj
{
	public:
		typedef  ::haxe::ui::containers::ScrollViewEvents_obj super;
		typedef TreeViewEvents_obj OBJ_;
		TreeViewEvents_obj();

	public:
		enum { _hx_ClassId = 0x3c4922ae };

		void __construct( ::haxe::ui::containers::TreeView treeview);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers._TreeView.TreeViewEvents")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers._TreeView.TreeViewEvents"); }
		static ::hx::ObjectPtr< TreeViewEvents_obj > __new( ::haxe::ui::containers::TreeView treeview);
		static ::hx::ObjectPtr< TreeViewEvents_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::TreeView treeview);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TreeViewEvents_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TreeViewEvents",7c,22,46,87); }

		 ::haxe::ui::containers::TreeView _treeview;
};

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TreeView

#endif /* INCLUDED_haxe_ui_containers__TreeView_TreeViewEvents */ 
