#ifndef INCLUDED_hx_widgets_TreeItemId
#define INCLUDED_hx_widgets_TreeItemId

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_f785edb72698e71e_8_new)
#ifndef INCLUDED_5e796aaa4b4aa75c
#define INCLUDED_5e796aaa4b4aa75c
#include "wx/treebase.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,TreeItemId)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES TreeItemId_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TreeItemId_obj OBJ_;
		TreeItemId_obj();

	public:
		enum { _hx_ClassId = 0x778d7acb };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.TreeItemId")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.TreeItemId"); }

		inline static ::hx::ObjectPtr< TreeItemId_obj > __new() {
			::hx::ObjectPtr< TreeItemId_obj > __this = new TreeItemId_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< TreeItemId_obj > __alloc(::hx::Ctx *_hx_ctx) {
			TreeItemId_obj *__this = (TreeItemId_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TreeItemId_obj), true, "hx.widgets.TreeItemId"));
			*(void **)__this = TreeItemId_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_f785edb72698e71e_8_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TreeItemId_obj();

		HX_DO_RTTI_ALL;
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TreeItemId",ec,1b,6d,3e); }

		 wxTreeItemId itemId;
};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_TreeItemId */ 
