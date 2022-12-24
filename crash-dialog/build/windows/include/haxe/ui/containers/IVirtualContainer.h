#ifndef INCLUDED_haxe_ui_containers_IVirtualContainer
#define INCLUDED_haxe_ui_containers_IVirtualContainer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,IVirtualContainer)
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


class HXCPP_CLASS_ATTRIBUTES IVirtualContainer_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		Float (::hx::Object :: *_hx_get_itemWidth)(); 
		static inline Float get_itemWidth( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::containers::IVirtualContainer_obj *>(_hx_.mPtr->_hx_getInterface(0x3d194ad3)))->_hx_get_itemWidth)();
		}
		Float (::hx::Object :: *_hx_set_itemWidth)(Float value); 
		static inline Float set_itemWidth( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::containers::IVirtualContainer_obj *>(_hx_.mPtr->_hx_getInterface(0x3d194ad3)))->_hx_set_itemWidth)(value);
		}
		Float (::hx::Object :: *_hx_get_itemHeight)(); 
		static inline Float get_itemHeight( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::containers::IVirtualContainer_obj *>(_hx_.mPtr->_hx_getInterface(0x3d194ad3)))->_hx_get_itemHeight)();
		}
		Float (::hx::Object :: *_hx_set_itemHeight)(Float value); 
		static inline Float set_itemHeight( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::containers::IVirtualContainer_obj *>(_hx_.mPtr->_hx_getInterface(0x3d194ad3)))->_hx_set_itemHeight)(value);
		}
		int (::hx::Object :: *_hx_get_itemCount)(); 
		static inline int get_itemCount( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::containers::IVirtualContainer_obj *>(_hx_.mPtr->_hx_getInterface(0x3d194ad3)))->_hx_get_itemCount)();
		}
		int (::hx::Object :: *_hx_set_itemCount)(int value); 
		static inline int set_itemCount( ::Dynamic _hx_,int value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::containers::IVirtualContainer_obj *>(_hx_.mPtr->_hx_getInterface(0x3d194ad3)))->_hx_set_itemCount)(value);
		}
		bool (::hx::Object :: *_hx_get_variableItemSize)(); 
		static inline bool get_variableItemSize( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::containers::IVirtualContainer_obj *>(_hx_.mPtr->_hx_getInterface(0x3d194ad3)))->_hx_get_variableItemSize)();
		}
		bool (::hx::Object :: *_hx_set_variableItemSize)(bool value); 
		static inline bool set_variableItemSize( ::Dynamic _hx_,bool value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::containers::IVirtualContainer_obj *>(_hx_.mPtr->_hx_getInterface(0x3d194ad3)))->_hx_set_variableItemSize)(value);
		}
		bool (::hx::Object :: *_hx_get_virtual)(); 
		static inline bool get_virtual( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::containers::IVirtualContainer_obj *>(_hx_.mPtr->_hx_getInterface(0x3d194ad3)))->_hx_get_virtual)();
		}
		bool (::hx::Object :: *_hx_set_virtual)(bool value); 
		static inline bool set_virtual( ::Dynamic _hx_,bool value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::containers::IVirtualContainer_obj *>(_hx_.mPtr->_hx_getInterface(0x3d194ad3)))->_hx_set_virtual)(value);
		}
		Float (::hx::Object :: *_hx_get_hscrollPos)(); 
		static inline Float get_hscrollPos( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::containers::IVirtualContainer_obj *>(_hx_.mPtr->_hx_getInterface(0x3d194ad3)))->_hx_get_hscrollPos)();
		}
		Float (::hx::Object :: *_hx_set_hscrollPos)(Float value); 
		static inline Float set_hscrollPos( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::containers::IVirtualContainer_obj *>(_hx_.mPtr->_hx_getInterface(0x3d194ad3)))->_hx_set_hscrollPos)(value);
		}
		Float (::hx::Object :: *_hx_get_hscrollMax)(); 
		static inline Float get_hscrollMax( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::containers::IVirtualContainer_obj *>(_hx_.mPtr->_hx_getInterface(0x3d194ad3)))->_hx_get_hscrollMax)();
		}
		Float (::hx::Object :: *_hx_set_hscrollMax)(Float value); 
		static inline Float set_hscrollMax( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::containers::IVirtualContainer_obj *>(_hx_.mPtr->_hx_getInterface(0x3d194ad3)))->_hx_set_hscrollMax)(value);
		}
		Float (::hx::Object :: *_hx_get_hscrollPageSize)(); 
		static inline Float get_hscrollPageSize( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::containers::IVirtualContainer_obj *>(_hx_.mPtr->_hx_getInterface(0x3d194ad3)))->_hx_get_hscrollPageSize)();
		}
		Float (::hx::Object :: *_hx_set_hscrollPageSize)(Float value); 
		static inline Float set_hscrollPageSize( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::containers::IVirtualContainer_obj *>(_hx_.mPtr->_hx_getInterface(0x3d194ad3)))->_hx_set_hscrollPageSize)(value);
		}
		Float (::hx::Object :: *_hx_get_vscrollPos)(); 
		static inline Float get_vscrollPos( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::containers::IVirtualContainer_obj *>(_hx_.mPtr->_hx_getInterface(0x3d194ad3)))->_hx_get_vscrollPos)();
		}
		Float (::hx::Object :: *_hx_set_vscrollPos)(Float value); 
		static inline Float set_vscrollPos( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::containers::IVirtualContainer_obj *>(_hx_.mPtr->_hx_getInterface(0x3d194ad3)))->_hx_set_vscrollPos)(value);
		}
		Float (::hx::Object :: *_hx_get_vscrollMax)(); 
		static inline Float get_vscrollMax( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::containers::IVirtualContainer_obj *>(_hx_.mPtr->_hx_getInterface(0x3d194ad3)))->_hx_get_vscrollMax)();
		}
		Float (::hx::Object :: *_hx_set_vscrollMax)(Float value); 
		static inline Float set_vscrollMax( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::containers::IVirtualContainer_obj *>(_hx_.mPtr->_hx_getInterface(0x3d194ad3)))->_hx_set_vscrollMax)(value);
		}
		Float (::hx::Object :: *_hx_get_vscrollPageSize)(); 
		static inline Float get_vscrollPageSize( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::containers::IVirtualContainer_obj *>(_hx_.mPtr->_hx_getInterface(0x3d194ad3)))->_hx_get_vscrollPageSize)();
		}
		Float (::hx::Object :: *_hx_set_vscrollPageSize)(Float value); 
		static inline Float set_vscrollPageSize( ::Dynamic _hx_,Float value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::containers::IVirtualContainer_obj *>(_hx_.mPtr->_hx_getInterface(0x3d194ad3)))->_hx_set_vscrollPageSize)(value);
		}
		 ::haxe::ui::core::ItemRenderer (::hx::Object :: *_hx_get_itemRenderer)(); 
		static inline  ::haxe::ui::core::ItemRenderer get_itemRenderer( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::containers::IVirtualContainer_obj *>(_hx_.mPtr->_hx_getInterface(0x3d194ad3)))->_hx_get_itemRenderer)();
		}
		 ::haxe::ui::core::ItemRenderer (::hx::Object :: *_hx_set_itemRenderer)( ::haxe::ui::core::ItemRenderer value); 
		static inline  ::haxe::ui::core::ItemRenderer set_itemRenderer( ::Dynamic _hx_, ::haxe::ui::core::ItemRenderer value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::containers::IVirtualContainer_obj *>(_hx_.mPtr->_hx_getInterface(0x3d194ad3)))->_hx_set_itemRenderer)(value);
		}
		::hx::Class (::hx::Object :: *_hx_get_itemRendererClass)(); 
		static inline ::hx::Class get_itemRendererClass( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::containers::IVirtualContainer_obj *>(_hx_.mPtr->_hx_getInterface(0x3d194ad3)))->_hx_get_itemRendererClass)();
		}
		::hx::Class (::hx::Object :: *_hx_set_itemRendererClass)(::hx::Class value); 
		static inline ::hx::Class set_itemRendererClass( ::Dynamic _hx_,::hx::Class value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::containers::IVirtualContainer_obj *>(_hx_.mPtr->_hx_getInterface(0x3d194ad3)))->_hx_set_itemRendererClass)(value);
		}
};

} // end namespace haxe
} // end namespace ui
} // end namespace containers

#endif /* INCLUDED_haxe_ui_containers_IVirtualContainer */ 
