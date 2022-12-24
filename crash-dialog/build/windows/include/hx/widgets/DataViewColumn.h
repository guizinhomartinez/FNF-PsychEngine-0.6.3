#ifndef INCLUDED_hx_widgets_DataViewColumn
#define INCLUDED_hx_widgets_DataViewColumn

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_SettableHeaderColumn
#include <hx/widgets/SettableHeaderColumn.h>
#endif
#ifndef INCLUDED_17f2a4542ec8b462
#define INCLUDED_17f2a4542ec8b462
#include "wx/dataview.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,DataViewColumn)
HX_DECLARE_CLASS2(hx,widgets,DataViewRenderer)
HX_DECLARE_CLASS2(hx,widgets,HeaderColumn)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,SettableHeaderColumn)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES DataViewColumn_obj : public  ::hx::widgets::SettableHeaderColumn_obj
{
	public:
		typedef  ::hx::widgets::SettableHeaderColumn_obj super;
		typedef DataViewColumn_obj OBJ_;
		DataViewColumn_obj();

	public:
		enum { _hx_ClassId = 0x1b8a1064 };

		void __construct(::String title, ::hx::widgets::DataViewRenderer renderer,::hx::Null< int >  __o_modelColumn);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.DataViewColumn")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.DataViewColumn"); }
		static ::hx::ObjectPtr< DataViewColumn_obj > __new(::String title, ::hx::widgets::DataViewRenderer renderer,::hx::Null< int >  __o_modelColumn);
		static ::hx::ObjectPtr< DataViewColumn_obj > __alloc(::hx::Ctx *_hx_ctx,::String title, ::hx::widgets::DataViewRenderer renderer,::hx::Null< int >  __o_modelColumn);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DataViewColumn_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DataViewColumn",05,56,87,c1); }

		::cpp::Pointer<  wxDataViewColumn > dataViewColumnRef;
		::cpp::Pointer<  wxDataViewColumn > get_dataViewColumnRef();
		::Dynamic get_dataViewColumnRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_DataViewColumn */ 
