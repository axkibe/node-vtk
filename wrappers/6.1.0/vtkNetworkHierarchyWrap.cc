/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkTreeAlgorithmWrap.h"
#include "vtkNetworkHierarchyWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkNetworkHierarchyWrap::ptpl;

VtkNetworkHierarchyWrap::VtkNetworkHierarchyWrap()
{ }

VtkNetworkHierarchyWrap::VtkNetworkHierarchyWrap(vtkSmartPointer<vtkNetworkHierarchy> _native)
{ native = _native; }

VtkNetworkHierarchyWrap::~VtkNetworkHierarchyWrap()
{ }

void VtkNetworkHierarchyWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkNetworkHierarchy").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("NetworkHierarchy").ToLocalChecked(), ConstructorGetter);
}

void VtkNetworkHierarchyWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkNetworkHierarchyWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkTreeAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkTreeAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkNetworkHierarchyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetIPArrayName", GetIPArrayName);
	Nan::SetPrototypeMethod(tpl, "getIPArrayName", GetIPArrayName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetIPArrayName", SetIPArrayName);
	Nan::SetPrototypeMethod(tpl, "setIPArrayName", SetIPArrayName);

#ifdef VTK_NODE_PLUS_VTKNETWORKHIERARCHYWRAP_INITPTPL
	VTK_NODE_PLUS_VTKNETWORKHIERARCHYWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkNetworkHierarchyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkNetworkHierarchy> native = vtkSmartPointer<vtkNetworkHierarchy>::New();
		VtkNetworkHierarchyWrap* obj = new VtkNetworkHierarchyWrap(native);
		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkNetworkHierarchyWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetworkHierarchyWrap *wrapper = ObjectWrap::Unwrap<VtkNetworkHierarchyWrap>(info.Holder());
	vtkNetworkHierarchy *native = (vtkNetworkHierarchy *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkNetworkHierarchyWrap::GetIPArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetworkHierarchyWrap *wrapper = ObjectWrap::Unwrap<VtkNetworkHierarchyWrap>(info.Holder());
	vtkNetworkHierarchy *native = (vtkNetworkHierarchy *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIPArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkNetworkHierarchyWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetworkHierarchyWrap *wrapper = ObjectWrap::Unwrap<VtkNetworkHierarchyWrap>(info.Holder());
	vtkNetworkHierarchy *native = (vtkNetworkHierarchy *)wrapper->native.GetPointer();
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

void VtkNetworkHierarchyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetworkHierarchyWrap *wrapper = ObjectWrap::Unwrap<VtkNetworkHierarchyWrap>(info.Holder());
	vtkNetworkHierarchy *native = (vtkNetworkHierarchy *)wrapper->native.GetPointer();
	vtkNetworkHierarchy * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkNetworkHierarchyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkNetworkHierarchyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkNetworkHierarchyWrap *w = new VtkNetworkHierarchyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkNetworkHierarchyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetworkHierarchyWrap *wrapper = ObjectWrap::Unwrap<VtkNetworkHierarchyWrap>(info.Holder());
	vtkNetworkHierarchy *native = (vtkNetworkHierarchy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkNetworkHierarchy * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkNetworkHierarchyWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkNetworkHierarchyWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkNetworkHierarchyWrap *w = new VtkNetworkHierarchyWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkNetworkHierarchyWrap::SetIPArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetworkHierarchyWrap *wrapper = ObjectWrap::Unwrap<VtkNetworkHierarchyWrap>(info.Holder());
	vtkNetworkHierarchy *native = (vtkNetworkHierarchy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIPArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

