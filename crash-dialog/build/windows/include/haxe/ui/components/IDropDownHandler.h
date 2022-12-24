#ifndef INCLUDED_haxe_ui_components_IDropDownHandler
#define INCLUDED_haxe_ui_components_IDropDownHandler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,components,IDropDownHandler)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{


class HXCPP_CLASS_ATTRIBUTES IDropDownHandler_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		 ::haxe::ui::core::Component (::hx::Object :: *_hx_get_component)(); 
		static inline  ::haxe::ui::core::Component get_component( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::components::IDropDownHandler_obj *>(_hx_.mPtr->_hx_getInterface(0x726dd720)))->_hx_get_component)();
		}
		int (::hx::Object :: *_hx_get_selectedIndex)(); 
		static inline int get_selectedIndex( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::components::IDropDownHandler_obj *>(_hx_.mPtr->_hx_getInterface(0x726dd720)))->_hx_get_selectedIndex)();
		}
		int (::hx::Object :: *_hx_set_selectedIndex)(int value); 
		static inline int set_selectedIndex( ::Dynamic _hx_,int value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::components::IDropDownHandler_obj *>(_hx_.mPtr->_hx_getInterface(0x726dd720)))->_hx_set_selectedIndex)(value);
		}
		 ::Dynamic (::hx::Object :: *_hx_get_selectedItem)(); 
		static inline  ::Dynamic get_selectedItem( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::components::IDropDownHandler_obj *>(_hx_.mPtr->_hx_getInterface(0x726dd720)))->_hx_get_selectedItem)();
		}
		 ::Dynamic (::hx::Object :: *_hx_set_selectedItem)( ::Dynamic value); 
		static inline  ::Dynamic set_selectedItem( ::Dynamic _hx_, ::Dynamic value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::components::IDropDownHandler_obj *>(_hx_.mPtr->_hx_getInterface(0x726dd720)))->_hx_set_selectedItem)(value);
		}
		void (::hx::Object :: *_hx_prepare)( ::haxe::ui::containers::Box wrapper); 
		static inline void prepare( ::Dynamic _hx_, ::haxe::ui::containers::Box wrapper) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::components::IDropDownHandler_obj *>(_hx_.mPtr->_hx_getInterface(0x726dd720)))->_hx_prepare)(wrapper);
		}
		void (::hx::Object :: *_hx_reset)(); 
		static inline void reset( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::components::IDropDownHandler_obj *>(_hx_.mPtr->_hx_getInterface(0x726dd720)))->_hx_reset)();
		}
		void (::hx::Object :: *_hx_applyDefault)(); 
		static inline void applyDefault( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::components::IDropDownHandler_obj *>(_hx_.mPtr->_hx_getInterface(0x726dd720)))->_hx_applyDefault)();
		}
		void (::hx::Object :: *_hx_pauseEvents)(); 
		static inline void pauseEvents( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::components::IDropDownHandler_obj *>(_hx_.mPtr->_hx_getInterface(0x726dd720)))->_hx_pauseEvents)();
		}
		void (::hx::Object :: *_hx_resumeEvents)(); 
		static inline void resumeEvents( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::components::IDropDownHandler_obj *>(_hx_.mPtr->_hx_getInterface(0x726dd720)))->_hx_resumeEvents)();
		}
};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_IDropDownHandler */ 
