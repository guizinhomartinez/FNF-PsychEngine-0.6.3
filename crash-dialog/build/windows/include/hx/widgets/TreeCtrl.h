#ifndef INCLUDED_hx_widgets_TreeCtrl
#define INCLUDED_hx_widgets_TreeCtrl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_3f9eac901841d783
#define INCLUDED_3f9eac901841d783
#include "wx/treectrl.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Control)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,ImageList)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,TreeCtrl)
HX_DECLARE_CLASS2(hx,widgets,TreeItemId)
HX_DECLARE_CLASS2(hx,widgets,Window)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES TreeCtrl_obj : public  ::hx::widgets::Control_obj
{
	public:
		typedef  ::hx::widgets::Control_obj super;
		typedef TreeCtrl_obj OBJ_;
		TreeCtrl_obj();

	public:
		enum { _hx_ClassId = 0x37c1c2a0 };

		void __construct( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.TreeCtrl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.TreeCtrl"); }
		static ::hx::ObjectPtr< TreeCtrl_obj > __new( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		static ::hx::ObjectPtr< TreeCtrl_obj > __alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TreeCtrl_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TreeCtrl",49,11,42,ff); }

		 ::hx::widgets::ImageList _imageList;
		 ::hx::widgets::ImageList get_imageList();
		::Dynamic get_imageList_dyn();

		 ::hx::widgets::ImageList set_imageList( ::hx::widgets::ImageList value);
		::Dynamic set_imageList_dyn();

		 ::hx::widgets::TreeItemId addRoot(::String text,::hx::Null< int >  image,::hx::Null< int >  selectedImage);
		::Dynamic addRoot_dyn();

		 ::hx::widgets::TreeItemId appendItem( ::hx::widgets::TreeItemId parent,::String text,::hx::Null< int >  image,::hx::Null< int >  selectedImage);
		::Dynamic appendItem_dyn();

		void collapse( ::hx::widgets::TreeItemId item);
		::Dynamic collapse_dyn();

		void collapseAll();
		::Dynamic collapseAll_dyn();

		void collapseAllChildren( ::hx::widgets::TreeItemId item);
		::Dynamic collapseAllChildren_dyn();

		void expand( ::hx::widgets::TreeItemId item);
		::Dynamic expand_dyn();

		void expandAll();
		::Dynamic expandAll_dyn();

		void expandAllChildren( ::hx::widgets::TreeItemId item);
		::Dynamic expandAllChildren_dyn();

		void _hx_delete( ::hx::widgets::TreeItemId item);
		::Dynamic _hx_delete_dyn();

		void deleteAllItems();
		::Dynamic deleteAllItems_dyn();

		void deleteChildren( ::hx::widgets::TreeItemId item);
		::Dynamic deleteChildren_dyn();

		void getChildrenCount( ::hx::widgets::TreeItemId item,::hx::Null< bool >  recursively);
		::Dynamic getChildrenCount_dyn();

		 ::hx::widgets::TreeItemId rootItem;
		 ::hx::widgets::TreeItemId get_rootItem();
		::Dynamic get_rootItem_dyn();

		 ::hx::widgets::TreeItemId get_selection();
		::Dynamic get_selection_dyn();

		 ::hx::widgets::TreeItemId set_selection( ::hx::widgets::TreeItemId value);
		::Dynamic set_selection_dyn();

		::String getItemText( ::hx::widgets::TreeItemId item);
		::Dynamic getItemText_dyn();

		::cpp::Pointer<  wxTreeCtrl > treeCtrlRef;
		::cpp::Pointer<  wxTreeCtrl > get_treeCtrlRef();
		::Dynamic get_treeCtrlRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_TreeCtrl */ 
