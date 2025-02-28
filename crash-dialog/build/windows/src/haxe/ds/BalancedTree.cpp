#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_TreeNode
#include <haxe/ds/TreeNode.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_97671fefbd3e0550_41_new,"haxe.ds.BalancedTree","new",0xfb50b0cf,"haxe.ds.BalancedTree.new","C:\\HaxeToolkit\\haxe\\std/haxe/ds/BalancedTree.hx",41,0x9022da28)
HX_LOCAL_STACK_FRAME(_hx_pos_97671fefbd3e0550_51_set,"haxe.ds.BalancedTree","set",0xfb547c11,"haxe.ds.BalancedTree.set","C:\\HaxeToolkit\\haxe\\std/haxe/ds/BalancedTree.hx",51,0x9022da28)
HX_LOCAL_STACK_FRAME(_hx_pos_97671fefbd3e0550_61_get,"haxe.ds.BalancedTree","get",0xfb4b6105,"haxe.ds.BalancedTree.get","C:\\HaxeToolkit\\haxe\\std/haxe/ds/BalancedTree.hx",61,0x9022da28)
HX_LOCAL_STACK_FRAME(_hx_pos_97671fefbd3e0550_150_setLoop,"haxe.ds.BalancedTree","setLoop",0xe1a32b15,"haxe.ds.BalancedTree.setLoop","C:\\HaxeToolkit\\haxe\\std/haxe/ds/BalancedTree.hx",150,0x9022da28)
HX_LOCAL_STACK_FRAME(_hx_pos_97671fefbd3e0550_205_balance,"haxe.ds.BalancedTree","balance",0xf7f4e10b,"haxe.ds.BalancedTree.balance","C:\\HaxeToolkit\\haxe\\std/haxe/ds/BalancedTree.hx",205,0x9022da28)
HX_LOCAL_STACK_FRAME(_hx_pos_97671fefbd3e0550_226_compare,"haxe.ds.BalancedTree","compare",0x57d05c94,"haxe.ds.BalancedTree.compare","C:\\HaxeToolkit\\haxe\\std/haxe/ds/BalancedTree.hx",226,0x9022da28)
namespace haxe{
namespace ds{

void BalancedTree_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_97671fefbd3e0550_41_new)
            	}

Dynamic BalancedTree_obj::__CreateEmpty() { return new BalancedTree_obj; }

void *BalancedTree_obj::_hx_vtable = 0;

Dynamic BalancedTree_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BalancedTree_obj > _hx_result = new BalancedTree_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BalancedTree_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4cc9cf7f;
}

static ::haxe::IMap_obj _hx_haxe_ds_BalancedTree__hx_haxe_IMap= {
	(  ::Dynamic (::hx::Object::*)( ::Dynamic))&::haxe::ds::BalancedTree_obj::get,
	( void (::hx::Object::*)( ::Dynamic, ::Dynamic))&::haxe::ds::BalancedTree_obj::set_dca24b06,
};

void BalancedTree_obj::set_dca24b06( ::Dynamic k, ::Dynamic v) {
			set(k,v);
}
void *BalancedTree_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x09c2bd39: return &_hx_haxe_ds_BalancedTree__hx_haxe_IMap;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void BalancedTree_obj::set( ::Dynamic key, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_97671fefbd3e0550_51_set)
HXDLIN(  51)		this->root = this->setLoop(key,value,this->root);
            	}


HX_DEFINE_DYNAMIC_FUNC2(BalancedTree_obj,set,(void))

 ::Dynamic BalancedTree_obj::get( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_97671fefbd3e0550_61_get)
HXLINE(  62)		 ::haxe::ds::TreeNode node = this->root;
HXLINE(  63)		while(::hx::IsNotNull( node )){
HXLINE(  64)			int c = this->compare(key,node->key);
HXLINE(  65)			if ((c == 0)) {
HXLINE(  66)				return node->value;
            			}
HXLINE(  67)			if ((c < 0)) {
HXLINE(  68)				node = node->left;
            			}
            			else {
HXLINE(  70)				node = node->right;
            			}
            		}
HXLINE(  72)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(BalancedTree_obj,get,return )

 ::haxe::ds::TreeNode BalancedTree_obj::setLoop( ::Dynamic k, ::Dynamic v, ::haxe::ds::TreeNode node){
            	HX_GC_STACKFRAME(&_hx_pos_97671fefbd3e0550_150_setLoop)
HXLINE( 151)		if (::hx::IsNull( node )) {
HXLINE( 152)			return  ::haxe::ds::TreeNode_obj::__alloc( HX_CTX ,null(),k,v,null(),null());
            		}
HXLINE( 153)		int c = this->compare(k,node->key);
HXLINE( 154)		if ((c == 0)) {
HXLINE( 154)			int _hx_tmp;
HXDLIN( 154)			if (::hx::IsNull( node )) {
HXLINE( 154)				_hx_tmp = 0;
            			}
            			else {
HXLINE( 154)				_hx_tmp = node->_height;
            			}
HXDLIN( 154)			return  ::haxe::ds::TreeNode_obj::__alloc( HX_CTX ,node->left,k,v,node->right,_hx_tmp);
            		}
            		else {
HXLINE( 154)			if ((c < 0)) {
HXLINE( 155)				 ::haxe::ds::TreeNode nl = this->setLoop(k,v,node->left);
HXLINE( 156)				return this->balance(nl,node->key,node->value,node->right);
            			}
            			else {
HXLINE( 158)				 ::haxe::ds::TreeNode nr = this->setLoop(k,v,node->right);
HXLINE( 159)				return this->balance(node->left,node->key,node->value,nr);
            			}
            		}
HXLINE( 154)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(BalancedTree_obj,setLoop,return )

 ::haxe::ds::TreeNode BalancedTree_obj::balance( ::haxe::ds::TreeNode l, ::Dynamic k, ::Dynamic v, ::haxe::ds::TreeNode r){
            	HX_GC_STACKFRAME(&_hx_pos_97671fefbd3e0550_205_balance)
HXLINE( 206)		int hl;
HXDLIN( 206)		if (::hx::IsNull( l )) {
HXLINE( 206)			hl = 0;
            		}
            		else {
HXLINE( 206)			hl = l->_height;
            		}
HXLINE( 207)		int hr;
HXDLIN( 207)		if (::hx::IsNull( r )) {
HXLINE( 207)			hr = 0;
            		}
            		else {
HXLINE( 207)			hr = r->_height;
            		}
HXLINE( 208)		if ((hl > (hr + 2))) {
HXLINE( 209)			 ::haxe::ds::TreeNode _this = l->left;
HXDLIN( 209)			int _hx_tmp;
HXDLIN( 209)			if (::hx::IsNull( _this )) {
HXLINE( 209)				_hx_tmp = 0;
            			}
            			else {
HXLINE( 209)				_hx_tmp = _this->_height;
            			}
HXDLIN( 209)			 ::haxe::ds::TreeNode _this1 = l->right;
HXDLIN( 209)			int _hx_tmp1;
HXDLIN( 209)			if (::hx::IsNull( _this1 )) {
HXLINE( 209)				_hx_tmp1 = 0;
            			}
            			else {
HXLINE( 209)				_hx_tmp1 = _this1->_height;
            			}
HXDLIN( 209)			if ((_hx_tmp >= _hx_tmp1)) {
HXLINE( 210)				 ::haxe::ds::TreeNode l1 = l->left;
HXDLIN( 210)				 ::Dynamic l2 = l->key;
HXDLIN( 210)				 ::Dynamic l3 = l->value;
HXDLIN( 210)				return  ::haxe::ds::TreeNode_obj::__alloc( HX_CTX ,l1,l2,l3, ::haxe::ds::TreeNode_obj::__alloc( HX_CTX ,l->right,k,v,r,null()),null());
            			}
            			else {
HXLINE( 212)				 ::haxe::ds::TreeNode _hx_tmp =  ::haxe::ds::TreeNode_obj::__alloc( HX_CTX ,l->left,l->key,l->value,l->right->left,null());
HXDLIN( 212)				 ::Dynamic l1 = l->right->key;
HXDLIN( 212)				 ::Dynamic l2 = l->right->value;
HXDLIN( 212)				return  ::haxe::ds::TreeNode_obj::__alloc( HX_CTX ,_hx_tmp,l1,l2, ::haxe::ds::TreeNode_obj::__alloc( HX_CTX ,l->right->right,k,v,r,null()),null());
            			}
            		}
            		else {
HXLINE( 214)			if ((hr > (hl + 2))) {
HXLINE( 215)				 ::haxe::ds::TreeNode _this = r->right;
HXDLIN( 215)				int _hx_tmp;
HXDLIN( 215)				if (::hx::IsNull( _this )) {
HXLINE( 215)					_hx_tmp = 0;
            				}
            				else {
HXLINE( 215)					_hx_tmp = _this->_height;
            				}
HXDLIN( 215)				 ::haxe::ds::TreeNode _this1 = r->left;
HXDLIN( 215)				int _hx_tmp1;
HXDLIN( 215)				if (::hx::IsNull( _this1 )) {
HXLINE( 215)					_hx_tmp1 = 0;
            				}
            				else {
HXLINE( 215)					_hx_tmp1 = _this1->_height;
            				}
HXDLIN( 215)				if ((_hx_tmp > _hx_tmp1)) {
HXLINE( 216)					return  ::haxe::ds::TreeNode_obj::__alloc( HX_CTX , ::haxe::ds::TreeNode_obj::__alloc( HX_CTX ,l,k,v,r->left,null()),r->key,r->value,r->right,null());
            				}
            				else {
HXLINE( 218)					 ::haxe::ds::TreeNode _hx_tmp =  ::haxe::ds::TreeNode_obj::__alloc( HX_CTX ,l,k,v,r->left->left,null());
HXDLIN( 218)					 ::Dynamic r1 = r->left->key;
HXDLIN( 218)					 ::Dynamic r2 = r->left->value;
HXDLIN( 218)					return  ::haxe::ds::TreeNode_obj::__alloc( HX_CTX ,_hx_tmp,r1,r2, ::haxe::ds::TreeNode_obj::__alloc( HX_CTX ,r->left->right,r->key,r->value,r->right,null()),null());
            				}
            			}
            			else {
HXLINE( 221)				int _hx_tmp;
HXDLIN( 221)				if ((hl > hr)) {
HXLINE( 221)					_hx_tmp = hl;
            				}
            				else {
HXLINE( 221)					_hx_tmp = hr;
            				}
HXDLIN( 221)				return  ::haxe::ds::TreeNode_obj::__alloc( HX_CTX ,l,k,v,r,(_hx_tmp + 1));
            			}
            		}
HXLINE( 208)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC4(BalancedTree_obj,balance,return )

int BalancedTree_obj::compare( ::Dynamic k1, ::Dynamic k2){
            	HX_STACKFRAME(&_hx_pos_97671fefbd3e0550_226_compare)
HXDLIN( 226)		return ::Reflect_obj::compare(k1,k2);
            	}


HX_DEFINE_DYNAMIC_FUNC2(BalancedTree_obj,compare,return )


::hx::ObjectPtr< BalancedTree_obj > BalancedTree_obj::__new() {
	::hx::ObjectPtr< BalancedTree_obj > __this = new BalancedTree_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BalancedTree_obj > BalancedTree_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BalancedTree_obj *__this = (BalancedTree_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BalancedTree_obj), true, "haxe.ds.BalancedTree"));
	*(void **)__this = BalancedTree_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BalancedTree_obj::BalancedTree_obj()
{
}

void BalancedTree_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BalancedTree);
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_END_CLASS();
}

void BalancedTree_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(root,"root");
}

::hx::Val BalancedTree_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { return ::hx::Val( root ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setLoop") ) { return ::hx::Val( setLoop_dyn() ); }
		if (HX_FIELD_EQ(inName,"balance") ) { return ::hx::Val( balance_dyn() ); }
		if (HX_FIELD_EQ(inName,"compare") ) { return ::hx::Val( compare_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BalancedTree_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast<  ::haxe::ds::TreeNode >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BalancedTree_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("root",22,ee,ae,4b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BalancedTree_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::TreeNode */ ,(int)offsetof(BalancedTree_obj,root),HX_("root",22,ee,ae,4b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BalancedTree_obj_sStaticStorageInfo = 0;
#endif

static ::String BalancedTree_obj_sMemberFields[] = {
	HX_("root",22,ee,ae,4b),
	HX_("set",a2,9b,57,00),
	HX_("get",96,80,4e,00),
	HX_("setLoop",26,e7,3b,0d),
	HX_("balance",1c,9d,8d,23),
	HX_("compare",a5,18,69,83),
	::String(null()) };

::hx::Class BalancedTree_obj::__mClass;

void BalancedTree_obj::__register()
{
	BalancedTree_obj _hx_dummy;
	BalancedTree_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ds.BalancedTree",5d,9d,3e,70);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BalancedTree_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BalancedTree_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BalancedTree_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BalancedTree_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ds
