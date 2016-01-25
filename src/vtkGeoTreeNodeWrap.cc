/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkGeoTreeNodeWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkGeoTreeNodeWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkGeoTreeNodeWrap::ptpl;

VtkGeoTreeNodeWrap::VtkGeoTreeNodeWrap()
{ }

VtkGeoTreeNodeWrap::VtkGeoTreeNodeWrap(vtkSmartPointer<vtkGeoTreeNode> _native)
{ native = _native; }

VtkGeoTreeNodeWrap::~VtkGeoTreeNodeWrap()
{ }

void VtkGeoTreeNodeWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkGeoTreeNodeWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkGeoTreeNode").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("GeoTreeNode").ToLocalChecked(),tpl->GetFunction());
}

void VtkGeoTreeNodeWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "CreateChildren", CreateChildren);
	Nan::SetPrototypeMethod(tpl, "createChildren", CreateChildren);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "DeleteData", DeleteData);
	Nan::SetPrototypeMethod(tpl, "deleteData", DeleteData);

	Nan::SetPrototypeMethod(tpl, "GetChildTreeNode", GetChildTreeNode);
	Nan::SetPrototypeMethod(tpl, "getChildTreeNode", GetChildTreeNode);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetLevel", GetLevel);
	Nan::SetPrototypeMethod(tpl, "getLevel", GetLevel);

	Nan::SetPrototypeMethod(tpl, "GetNewer", GetNewer);
	Nan::SetPrototypeMethod(tpl, "getNewer", GetNewer);

	Nan::SetPrototypeMethod(tpl, "GetOlder", GetOlder);
	Nan::SetPrototypeMethod(tpl, "getOlder", GetOlder);

	Nan::SetPrototypeMethod(tpl, "GetParentTreeNode", GetParentTreeNode);
	Nan::SetPrototypeMethod(tpl, "getParentTreeNode", GetParentTreeNode);

	Nan::SetPrototypeMethod(tpl, "GetWhichChildAreYou", GetWhichChildAreYou);
	Nan::SetPrototypeMethod(tpl, "getWhichChildAreYou", GetWhichChildAreYou);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetChild", SetChild);
	Nan::SetPrototypeMethod(tpl, "setChild", SetChild);

	Nan::SetPrototypeMethod(tpl, "SetLatitudeRange", SetLatitudeRange);
	Nan::SetPrototypeMethod(tpl, "setLatitudeRange", SetLatitudeRange);

	Nan::SetPrototypeMethod(tpl, "SetLevel", SetLevel);
	Nan::SetPrototypeMethod(tpl, "setLevel", SetLevel);

	Nan::SetPrototypeMethod(tpl, "SetLongitudeRange", SetLongitudeRange);
	Nan::SetPrototypeMethod(tpl, "setLongitudeRange", SetLongitudeRange);

	Nan::SetPrototypeMethod(tpl, "SetNewer", SetNewer);
	Nan::SetPrototypeMethod(tpl, "setNewer", SetNewer);

	Nan::SetPrototypeMethod(tpl, "SetOlder", SetOlder);
	Nan::SetPrototypeMethod(tpl, "setOlder", SetOlder);

	Nan::SetPrototypeMethod(tpl, "SetParent", SetParent);
	Nan::SetPrototypeMethod(tpl, "setParent", SetParent);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

}

void VtkGeoTreeNodeWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGeoTreeNode> native = vtkSmartPointer<vtkGeoTreeNode>::New();
		VtkGeoTreeNodeWrap* obj = new VtkGeoTreeNodeWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGeoTreeNodeWrap::CreateChildren(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info.Holder());
	vtkGeoTreeNode *native = (vtkGeoTreeNode *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->CreateChildren();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGeoTreeNodeWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info.Holder());
	vtkGeoTreeNode *native = (vtkGeoTreeNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkGeoTreeNodeWrap *a0 = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkGeoTreeNode *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoTreeNodeWrap::DeleteData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info.Holder());
	vtkGeoTreeNode *native = (vtkGeoTreeNode *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DeleteData();
}

void VtkGeoTreeNodeWrap::GetChildTreeNode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info.Holder());
	vtkGeoTreeNode *native = (vtkGeoTreeNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkGeoTreeNode * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetChildTreeNode(
			info[0]->Int32Value()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkGeoTreeNodeWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGeoTreeNodeWrap *w = new VtkGeoTreeNodeWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoTreeNodeWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info.Holder());
	vtkGeoTreeNode *native = (vtkGeoTreeNode *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGeoTreeNodeWrap::GetLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info.Holder());
	vtkGeoTreeNode *native = (vtkGeoTreeNode *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLevel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGeoTreeNodeWrap::GetNewer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info.Holder());
	vtkGeoTreeNode *native = (vtkGeoTreeNode *)wrapper->native.GetPointer();
	vtkGeoTreeNode * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNewer();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkGeoTreeNodeWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGeoTreeNodeWrap *w = new VtkGeoTreeNodeWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeoTreeNodeWrap::GetOlder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info.Holder());
	vtkGeoTreeNode *native = (vtkGeoTreeNode *)wrapper->native.GetPointer();
	vtkGeoTreeNode * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOlder();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkGeoTreeNodeWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGeoTreeNodeWrap *w = new VtkGeoTreeNodeWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeoTreeNodeWrap::GetParentTreeNode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info.Holder());
	vtkGeoTreeNode *native = (vtkGeoTreeNode *)wrapper->native.GetPointer();
	vtkGeoTreeNode * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetParentTreeNode();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkGeoTreeNodeWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGeoTreeNodeWrap *w = new VtkGeoTreeNodeWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeoTreeNodeWrap::GetWhichChildAreYou(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info.Holder());
	vtkGeoTreeNode *native = (vtkGeoTreeNode *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWhichChildAreYou();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGeoTreeNodeWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info.Holder());
	vtkGeoTreeNode *native = (vtkGeoTreeNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoTreeNodeWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info.Holder());
	vtkGeoTreeNode *native = (vtkGeoTreeNode *)wrapper->native.GetPointer();
	vtkGeoTreeNode * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkGeoTreeNodeWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGeoTreeNodeWrap *w = new VtkGeoTreeNodeWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeoTreeNodeWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info.Holder());
	vtkGeoTreeNode *native = (vtkGeoTreeNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGeoTreeNode * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkGeoTreeNodeWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGeoTreeNodeWrap *w = new VtkGeoTreeNodeWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoTreeNodeWrap::SetChild(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info.Holder());
	vtkGeoTreeNode *native = (vtkGeoTreeNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkGeoTreeNodeWrap *a0 = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetChild(
				(vtkGeoTreeNode *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoTreeNodeWrap::SetLatitudeRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info.Holder());
	vtkGeoTreeNode *native = (vtkGeoTreeNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetLatitudeRange(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoTreeNodeWrap::SetLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info.Holder());
	vtkGeoTreeNode *native = (vtkGeoTreeNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLevel(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoTreeNodeWrap::SetLongitudeRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info.Holder());
	vtkGeoTreeNode *native = (vtkGeoTreeNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetLongitudeRange(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoTreeNodeWrap::SetNewer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info.Holder());
	vtkGeoTreeNode *native = (vtkGeoTreeNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkGeoTreeNodeWrap *a0 = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNewer(
			(vtkGeoTreeNode *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoTreeNodeWrap::SetOlder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info.Holder());
	vtkGeoTreeNode *native = (vtkGeoTreeNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkGeoTreeNodeWrap *a0 = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOlder(
			(vtkGeoTreeNode *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoTreeNodeWrap::SetParent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info.Holder());
	vtkGeoTreeNode *native = (vtkGeoTreeNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkGeoTreeNodeWrap *a0 = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetParent(
			(vtkGeoTreeNode *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoTreeNodeWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info.Holder());
	vtkGeoTreeNode *native = (vtkGeoTreeNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkGeoTreeNodeWrap *a0 = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ShallowCopy(
			(vtkGeoTreeNode *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

