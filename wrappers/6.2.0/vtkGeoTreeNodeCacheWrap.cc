/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkGeoTreeNodeCacheWrap.h"
#include "vtkGeoTreeNodeWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGeoTreeNodeCacheWrap::ptpl;

VtkGeoTreeNodeCacheWrap::VtkGeoTreeNodeCacheWrap()
{ }

VtkGeoTreeNodeCacheWrap::VtkGeoTreeNodeCacheWrap(vtkSmartPointer<vtkGeoTreeNodeCache> _native)
{ native = _native; }

VtkGeoTreeNodeCacheWrap::~VtkGeoTreeNodeCacheWrap()
{ }

void VtkGeoTreeNodeCacheWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGeoTreeNodeCache").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GeoTreeNodeCache").ToLocalChecked(), ConstructorGetter);
}

void VtkGeoTreeNodeCacheWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGeoTreeNodeCacheWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGeoTreeNodeCacheWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetCacheMaximumLimit", GetCacheMaximumLimit);
	Nan::SetPrototypeMethod(tpl, "getCacheMaximumLimit", GetCacheMaximumLimit);

	Nan::SetPrototypeMethod(tpl, "GetCacheMinimumLimit", GetCacheMinimumLimit);
	Nan::SetPrototypeMethod(tpl, "getCacheMinimumLimit", GetCacheMinimumLimit);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetSize", GetSize);
	Nan::SetPrototypeMethod(tpl, "getSize", GetSize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveNode", RemoveNode);
	Nan::SetPrototypeMethod(tpl, "removeNode", RemoveNode);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SendToFront", SendToFront);
	Nan::SetPrototypeMethod(tpl, "sendToFront", SendToFront);

	Nan::SetPrototypeMethod(tpl, "SetCacheMaximumLimit", SetCacheMaximumLimit);
	Nan::SetPrototypeMethod(tpl, "setCacheMaximumLimit", SetCacheMaximumLimit);

	Nan::SetPrototypeMethod(tpl, "SetCacheMinimumLimit", SetCacheMinimumLimit);
	Nan::SetPrototypeMethod(tpl, "setCacheMinimumLimit", SetCacheMinimumLimit);

	ptpl.Reset( tpl );
}

void VtkGeoTreeNodeCacheWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGeoTreeNodeCache> native = vtkSmartPointer<vtkGeoTreeNodeCache>::New();
		VtkGeoTreeNodeCacheWrap* obj = new VtkGeoTreeNodeCacheWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGeoTreeNodeCacheWrap::GetCacheMaximumLimit(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTreeNodeCacheWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTreeNodeCacheWrap>(info.Holder());
	vtkGeoTreeNodeCache *native = (vtkGeoTreeNodeCache *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCacheMaximumLimit();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGeoTreeNodeCacheWrap::GetCacheMinimumLimit(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTreeNodeCacheWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTreeNodeCacheWrap>(info.Holder());
	vtkGeoTreeNodeCache *native = (vtkGeoTreeNodeCache *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCacheMinimumLimit();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGeoTreeNodeCacheWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTreeNodeCacheWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTreeNodeCacheWrap>(info.Holder());
	vtkGeoTreeNodeCache *native = (vtkGeoTreeNodeCache *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGeoTreeNodeCacheWrap::GetSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTreeNodeCacheWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTreeNodeCacheWrap>(info.Holder());
	vtkGeoTreeNodeCache *native = (vtkGeoTreeNodeCache *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGeoTreeNodeCacheWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTreeNodeCacheWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTreeNodeCacheWrap>(info.Holder());
	vtkGeoTreeNodeCache *native = (vtkGeoTreeNodeCache *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
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

void VtkGeoTreeNodeCacheWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTreeNodeCacheWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTreeNodeCacheWrap>(info.Holder());
	vtkGeoTreeNodeCache *native = (vtkGeoTreeNodeCache *)wrapper->native.GetPointer();
	vtkGeoTreeNodeCache * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkGeoTreeNodeCacheWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGeoTreeNodeCacheWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGeoTreeNodeCacheWrap *w = new VtkGeoTreeNodeCacheWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeoTreeNodeCacheWrap::RemoveNode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTreeNodeCacheWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTreeNodeCacheWrap>(info.Holder());
	vtkGeoTreeNodeCache *native = (vtkGeoTreeNodeCache *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGeoTreeNodeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGeoTreeNodeWrap *a0 = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveNode(
			(vtkGeoTreeNode *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoTreeNodeCacheWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTreeNodeCacheWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTreeNodeCacheWrap>(info.Holder());
	vtkGeoTreeNodeCache *native = (vtkGeoTreeNodeCache *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGeoTreeNodeCache * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkGeoTreeNodeCacheWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGeoTreeNodeCacheWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGeoTreeNodeCacheWrap *w = new VtkGeoTreeNodeCacheWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoTreeNodeCacheWrap::SendToFront(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTreeNodeCacheWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTreeNodeCacheWrap>(info.Holder());
	vtkGeoTreeNodeCache *native = (vtkGeoTreeNodeCache *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGeoTreeNodeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGeoTreeNodeWrap *a0 = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SendToFront(
			(vtkGeoTreeNode *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoTreeNodeCacheWrap::SetCacheMaximumLimit(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTreeNodeCacheWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTreeNodeCacheWrap>(info.Holder());
	vtkGeoTreeNodeCache *native = (vtkGeoTreeNodeCache *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCacheMaximumLimit(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoTreeNodeCacheWrap::SetCacheMinimumLimit(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoTreeNodeCacheWrap *wrapper = ObjectWrap::Unwrap<VtkGeoTreeNodeCacheWrap>(info.Holder());
	vtkGeoTreeNodeCache *native = (vtkGeoTreeNodeCache *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCacheMinimumLimit(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

