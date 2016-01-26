/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractGridConnectivityWrap.h"
#include "vtkStructuredAMRGridConnectivityWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkStructuredAMRGridConnectivityWrap::ptpl;

VtkStructuredAMRGridConnectivityWrap::VtkStructuredAMRGridConnectivityWrap()
{ }

VtkStructuredAMRGridConnectivityWrap::VtkStructuredAMRGridConnectivityWrap(vtkSmartPointer<vtkStructuredAMRGridConnectivity> _native)
{ native = _native; }

VtkStructuredAMRGridConnectivityWrap::~VtkStructuredAMRGridConnectivityWrap()
{ }

void VtkStructuredAMRGridConnectivityWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkStructuredAMRGridConnectivity").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("StructuredAMRGridConnectivity").ToLocalChecked(), ConstructorGetter);
}

void VtkStructuredAMRGridConnectivityWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkStructuredAMRGridConnectivityWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractGridConnectivityWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractGridConnectivityWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkStructuredAMRGridConnectivityWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ComputeNeighbors", ComputeNeighbors);
	Nan::SetPrototypeMethod(tpl, "computeNeighbors", ComputeNeighbors);

	Nan::SetPrototypeMethod(tpl, "CreateGhostLayers", CreateGhostLayers);
	Nan::SetPrototypeMethod(tpl, "createGhostLayers", CreateGhostLayers);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfNeighbors", GetNumberOfNeighbors);
	Nan::SetPrototypeMethod(tpl, "getNumberOfNeighbors", GetNumberOfNeighbors);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkStructuredAMRGridConnectivityWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkStructuredAMRGridConnectivity> native = vtkSmartPointer<vtkStructuredAMRGridConnectivity>::New();
		VtkStructuredAMRGridConnectivityWrap* obj = new VtkStructuredAMRGridConnectivityWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkStructuredAMRGridConnectivityWrap::ComputeNeighbors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredAMRGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredAMRGridConnectivityWrap>(info.Holder());
	vtkStructuredAMRGridConnectivity *native = (vtkStructuredAMRGridConnectivity *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeNeighbors();
}

void VtkStructuredAMRGridConnectivityWrap::CreateGhostLayers(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredAMRGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredAMRGridConnectivityWrap>(info.Holder());
	vtkStructuredAMRGridConnectivity *native = (vtkStructuredAMRGridConnectivity *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->CreateGhostLayers(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredAMRGridConnectivityWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredAMRGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredAMRGridConnectivityWrap>(info.Holder());
	vtkStructuredAMRGridConnectivity *native = (vtkStructuredAMRGridConnectivity *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkStructuredAMRGridConnectivityWrap::GetNumberOfNeighbors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredAMRGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredAMRGridConnectivityWrap>(info.Holder());
	vtkStructuredAMRGridConnectivity *native = (vtkStructuredAMRGridConnectivity *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetNumberOfNeighbors(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredAMRGridConnectivityWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredAMRGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredAMRGridConnectivityWrap>(info.Holder());
	vtkStructuredAMRGridConnectivity *native = (vtkStructuredAMRGridConnectivity *)wrapper->native.GetPointer();
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

void VtkStructuredAMRGridConnectivityWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredAMRGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredAMRGridConnectivityWrap>(info.Holder());
	vtkStructuredAMRGridConnectivity *native = (vtkStructuredAMRGridConnectivity *)wrapper->native.GetPointer();
	vtkStructuredAMRGridConnectivity * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkStructuredAMRGridConnectivityWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStructuredAMRGridConnectivityWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStructuredAMRGridConnectivityWrap *w = new VtkStructuredAMRGridConnectivityWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkStructuredAMRGridConnectivityWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredAMRGridConnectivityWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredAMRGridConnectivityWrap>(info.Holder());
	vtkStructuredAMRGridConnectivity *native = (vtkStructuredAMRGridConnectivity *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkStructuredAMRGridConnectivity * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkStructuredAMRGridConnectivityWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkStructuredAMRGridConnectivityWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkStructuredAMRGridConnectivityWrap *w = new VtkStructuredAMRGridConnectivityWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

