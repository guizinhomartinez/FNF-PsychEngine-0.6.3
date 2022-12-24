#ifndef INCLUDED_haxe_ui_backend_CallLaterImpl
#define INCLUDED_haxe_ui_backend_CallLaterImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_ba418526ce7b3618_11_new)
HX_DECLARE_CLASS3(haxe,ui,backend,CallLaterImpl)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES CallLaterImpl_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CallLaterImpl_obj OBJ_;
		CallLaterImpl_obj();

	public:
		enum { _hx_ClassId = 0x1b00791c };

		void __construct( ::Dynamic fn);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.CallLaterImpl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.CallLaterImpl"); }

		inline static ::hx::ObjectPtr< CallLaterImpl_obj > __new( ::Dynamic fn) {
			::hx::ObjectPtr< CallLaterImpl_obj > __this = new CallLaterImpl_obj();
			__this->__construct(fn);
			return __this;
		}

		inline static ::hx::ObjectPtr< CallLaterImpl_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic fn) {
			CallLaterImpl_obj *__this = (CallLaterImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CallLaterImpl_obj), true, "haxe.ui.backend.CallLaterImpl"));
			*(void **)__this = CallLaterImpl_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_ba418526ce7b3618_11_new)
HXLINE(  12)		 ::Dynamic t = null();
HXLINE(  19)		fn();
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CallLaterImpl_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CallLaterImpl",ee,aa,f8,01); }

		 ::Dynamic _fn;
		Dynamic _fn_dyn() { return _fn;}
};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_CallLaterImpl */ 
