#ifndef INCLUDED_haxe_ui_containers_dialogs__Dialog_DialogButton_Impl_
#define INCLUDED_haxe_ui_containers_dialogs__Dialog_DialogButton_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(haxe,ui,containers,dialogs,_Dialog,DialogButton_Impl_)

namespace haxe{
namespace ui{
namespace containers{
namespace dialogs{
namespace _Dialog{


class HXCPP_CLASS_ATTRIBUTES DialogButton_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DialogButton_Impl__obj OBJ_;
		DialogButton_Impl__obj();

	public:
		enum { _hx_ClassId = 0x4cf2b14e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.containers.dialogs._Dialog.DialogButton_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.containers.dialogs._Dialog.DialogButton_Impl_"); }

		inline static ::hx::ObjectPtr< DialogButton_Impl__obj > __new() {
			::hx::ObjectPtr< DialogButton_Impl__obj > __this = new DialogButton_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< DialogButton_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			DialogButton_Impl__obj *__this = (DialogButton_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DialogButton_Impl__obj), false, "haxe.ui.containers.dialogs._Dialog.DialogButton_Impl_"));
			*(void **)__this = DialogButton_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DialogButton_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DialogButton_Impl_",1a,21,52,ed); }

		static void __boot();
		static ::String SAVE;
		static ::String _hx_YES;
		static ::String _hx_NO;
		static ::String CLOSE;
		static ::String OK;
		static ::String CANCEL;
		static ::String APPLY;
		static ::String bitOr(::String lhs,::String rhs);
		static ::Dynamic bitOr_dyn();

		static bool eq(::String lhs,::String rhs);
		static ::Dynamic eq_dyn();

		static ::Array< ::String > toArray(::String this1);
		static ::Dynamic toArray_dyn();

		static ::String toString(::String this1);
		static ::Dynamic toString_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace dialogs
} // end namespace _Dialog

#endif /* INCLUDED_haxe_ui_containers_dialogs__Dialog_DialogButton_Impl_ */ 
