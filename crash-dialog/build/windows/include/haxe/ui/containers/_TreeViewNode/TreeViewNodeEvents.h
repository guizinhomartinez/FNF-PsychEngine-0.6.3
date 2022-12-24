#ifndef INCLUDED_haxe_ui_containers__TreeViewNode_TreeViewNodeEvents
#define INCLUDED_haxe_ui_containers__TreeViewNode_TreeViewNodeEvents

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,TreeViewNode)
HX_DECLARE_CLASS3(haxe,ui,containers,VBox)
HX_DECLARE_CLASS4(haxe,ui,containers,_TreeViewNode,TreeViewNodeEvents)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,events,Events)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace containers{
namespace _TreeViewNode{


class HXCPP_CLASS_ATTRIBUTES TreeViewNodeEvents_obj : public  ::haxe::ui::events::Events_obj
{
	public:
		typedef  ::haxe::ui::events::Events_obj super;
		typedef TreeViewNodeEvents_obj OBJ_;
		TreeViewNodeEvents_obj();

	public:
		enum { _hx_ClassId = 0x157e672a };

		void __construct( ::haxe::ui::containers::TreeViewNode node);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers._TreeViewNode.TreeViewNodeEvents")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers._TreeViewNode.TreeViewNodeEvents"); }
		static ::hx::ObjectPtr< TreeViewNodeEvents_obj > __new( ::haxe::ui::containers::TreeViewNode node);
		static ::hx::ObjectPtr< TreeViewNodeEvents_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::TreeViewNode node);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TreeViewNodeEvents_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TreeViewNodeEvents",9e,fb,c3,28); }

		 ::haxe::ui::containers::TreeViewNode _node;
};

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TreeViewNode

#endif /* INCLUDED_haxe_ui_containers__TreeViewNode_TreeViewNodeEvents */ 
