/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkVoxelContoursToSurfaceFilterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkVoxelContoursToSurfaceFilterWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkVoxelContoursToSurfaceFilterWrap::ptpl;

VtkVoxelContoursToSurfaceFilterWrap::VtkVoxelContoursToSurfaceFilterWrap()
{ }

VtkVoxelContoursToSurfaceFilterWrap::VtkVoxelContoursToSurfaceFilterWrap(vtkSmartPointer<vtkVoxelContoursToSurfaceFilter> _native)
{ native = _native; }

VtkVoxelContoursToSurfaceFilterWrap::~VtkVoxelContoursToSurfaceFilterWrap()
{ }

void VtkVoxelContoursToSurfaceFilterWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkVoxelContoursToSurfaceFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkVoxelContoursToSurfaceFilter").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("VoxelContoursToSurfaceFilter").ToLocalChecked(),tpl->GetFunction());
}

void VtkVoxelContoursToSurfaceFilterWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetMemoryLimitInBytes", GetMemoryLimitInBytes);
	Nan::SetPrototypeMethod(tpl, "getMemoryLimitInBytes", GetMemoryLimitInBytes);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetMemoryLimitInBytes", SetMemoryLimitInBytes);
	Nan::SetPrototypeMethod(tpl, "setMemoryLimitInBytes", SetMemoryLimitInBytes);

	Nan::SetPrototypeMethod(tpl, "SetSpacing", SetSpacing);
	Nan::SetPrototypeMethod(tpl, "setSpacing", SetSpacing);

}

void VtkVoxelContoursToSurfaceFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkVoxelContoursToSurfaceFilter> native = vtkSmartPointer<vtkVoxelContoursToSurfaceFilter>::New();
		VtkVoxelContoursToSurfaceFilterWrap* obj = new VtkVoxelContoursToSurfaceFilterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkVoxelContoursToSurfaceFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoxelContoursToSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkVoxelContoursToSurfaceFilterWrap>(info.Holder());
	vtkVoxelContoursToSurfaceFilter *native = (vtkVoxelContoursToSurfaceFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkVoxelContoursToSurfaceFilterWrap::GetMemoryLimitInBytes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoxelContoursToSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkVoxelContoursToSurfaceFilterWrap>(info.Holder());
	vtkVoxelContoursToSurfaceFilter *native = (vtkVoxelContoursToSurfaceFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMemoryLimitInBytes();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVoxelContoursToSurfaceFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoxelContoursToSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkVoxelContoursToSurfaceFilterWrap>(info.Holder());
	vtkVoxelContoursToSurfaceFilter *native = (vtkVoxelContoursToSurfaceFilter *)wrapper->native.GetPointer();
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

void VtkVoxelContoursToSurfaceFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoxelContoursToSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkVoxelContoursToSurfaceFilterWrap>(info.Holder());
	vtkVoxelContoursToSurfaceFilter *native = (vtkVoxelContoursToSurfaceFilter *)wrapper->native.GetPointer();
	vtkVoxelContoursToSurfaceFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkVoxelContoursToSurfaceFilterWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkVoxelContoursToSurfaceFilterWrap *w = new VtkVoxelContoursToSurfaceFilterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkVoxelContoursToSurfaceFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoxelContoursToSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkVoxelContoursToSurfaceFilterWrap>(info.Holder());
	vtkVoxelContoursToSurfaceFilter *native = (vtkVoxelContoursToSurfaceFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkVoxelContoursToSurfaceFilter * r;
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
			Nan::New<v8::Function>(VtkVoxelContoursToSurfaceFilterWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkVoxelContoursToSurfaceFilterWrap *w = new VtkVoxelContoursToSurfaceFilterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVoxelContoursToSurfaceFilterWrap::SetMemoryLimitInBytes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoxelContoursToSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkVoxelContoursToSurfaceFilterWrap>(info.Holder());
	vtkVoxelContoursToSurfaceFilter *native = (vtkVoxelContoursToSurfaceFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMemoryLimitInBytes(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVoxelContoursToSurfaceFilterWrap::SetSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVoxelContoursToSurfaceFilterWrap *wrapper = ObjectWrap::Unwrap<VtkVoxelContoursToSurfaceFilterWrap>(info.Holder());
	vtkVoxelContoursToSurfaceFilter *native = (vtkVoxelContoursToSurfaceFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetSpacing(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

