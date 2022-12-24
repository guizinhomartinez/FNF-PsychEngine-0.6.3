#ifndef INCLUDED_hx_widgets_ListCtrl
#define INCLUDED_hx_widgets_ListCtrl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_255fe586a8b249f3
#define INCLUDED_255fe586a8b249f3
#include "wx/listctrl.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Control)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,ImageList)
HX_DECLARE_CLASS2(hx,widgets,ListCtrl)
HX_DECLARE_CLASS2(hx,widgets,ListItem)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES ListCtrl_obj : public  ::hx::widgets::Control_obj
{
	public:
		typedef  ::hx::widgets::Control_obj super;
		typedef ListCtrl_obj OBJ_;
		ListCtrl_obj();

	public:
		enum { _hx_ClassId = 0x33eec5a0 };

		void __construct( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.ListCtrl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.ListCtrl"); }
		static ::hx::ObjectPtr< ListCtrl_obj > __new( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		static ::hx::ObjectPtr< ListCtrl_obj > __alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ListCtrl_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ListCtrl",49,14,6f,fb); }

		int insertItem( ::hx::widgets::ListItem item,::hx::Null< bool >  autoDestroy);
		::Dynamic insertItem_dyn();

		bool setItemState(int item,int state,int stateMask);
		::Dynamic setItemState_dyn();

		bool setItem( ::hx::widgets::ListItem item,::hx::Null< bool >  autoDestroy);
		::Dynamic setItem_dyn();

		int addItem( ::hx::widgets::ListItem item,::hx::Null< bool >  autoDestroy);
		::Dynamic addItem_dyn();

		bool deleteItem(int index);
		::Dynamic deleteItem_dyn();

		bool deleteAllItems();
		::Dynamic deleteAllItems_dyn();

		bool ensureVisible(int item);
		::Dynamic ensureVisible_dyn();

		int itemCount;
		int get_itemCount();
		::Dynamic get_itemCount_dyn();

		int selectedItemCount;
		int get_selectedItemCount();
		::Dynamic get_selectedItemCount_dyn();

		bool enableAlternateRowColours;
		bool set_enableAlternateRowColours(bool value);
		::Dynamic set_enableAlternateRowColours_dyn();

		 ::hx::widgets::ImageList get_largeImageList();
		::Dynamic get_largeImageList_dyn();

		 ::hx::widgets::ImageList set_largeImageList( ::hx::widgets::ImageList value);
		::Dynamic set_largeImageList_dyn();

		 ::hx::widgets::ImageList get_smallImageList();
		::Dynamic get_smallImageList_dyn();

		 ::hx::widgets::ImageList set_smallImageList( ::hx::widgets::ImageList value);
		::Dynamic set_smallImageList_dyn();

		int appendColumn(::String heading);
		::Dynamic appendColumn_dyn();

		int getNextItem(int item,int state);
		::Dynamic getNextItem_dyn();

		bool getItem( ::hx::widgets::ListItem info);
		::Dynamic getItem_dyn();

		::Array< int > selectedIndexes;
		::Array< int > get_selectedIndexes();
		::Dynamic get_selectedIndexes_dyn();

		int get_selectedIndex();
		::Dynamic get_selectedIndex_dyn();

		int set_selectedIndex(int value);
		::Dynamic set_selectedIndex_dyn();

		::cpp::Pointer<  wxListCtrl > listCtrlRef;
		::cpp::Pointer<  wxListCtrl > get_listCtrlRef();
		::Dynamic get_listCtrlRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_ListCtrl */ 
