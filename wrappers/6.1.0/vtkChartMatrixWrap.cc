/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractContextItemWrap.h"
#include "vtkChartMatrixWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkChartMatrixWrap::ptpl;

VtkChartMatrixWrap::VtkChartMatrixWrap()
{ }

VtkChartMatrixWrap::VtkChartMatrixWrap(vtkSmartPointer<vtkChartMatrix> _native)
{ native = _native; }

VtkChartMatrixWrap::~VtkChartMatrixWrap()
{ }

void VtkChartMatrixWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkChartMatrix").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ChartMatrix").ToLocalChecked(), ConstructorGetter);
}

void VtkChartMatrixWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkChartMatrixWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractContextItemWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractContextItemWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkChartMatrixWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Allocate", Allocate);
	Nan::SetPrototypeMethod(tpl, "allocate", Allocate);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBorders", SetBorders);
	Nan::SetPrototypeMethod(tpl, "setBorders", SetBorders);

	Nan::SetPrototypeMethod(tpl, "Update", Update);
	Nan::SetPrototypeMethod(tpl, "update", Update);

	ptpl.Reset( tpl );
}

void VtkChartMatrixWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkChartMatrix> native = vtkSmartPointer<vtkChartMatrix>::New();
		VtkChartMatrixWrap* obj = new VtkChartMatrixWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkChartMatrixWrap::Allocate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkChartMatrixWrap>(info.Holder());
	vtkChartMatrix *native = (vtkChartMatrix *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Allocate();
}

void VtkChartMatrixWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkChartMatrixWrap>(info.Holder());
	vtkChartMatrix *native = (vtkChartMatrix *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkChartMatrixWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkChartMatrixWrap>(info.Holder());
	vtkChartMatrix *native = (vtkChartMatrix *)wrapper->native.GetPointer();
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

void VtkChartMatrixWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkChartMatrixWrap>(info.Holder());
	vtkChartMatrix *native = (vtkChartMatrix *)wrapper->native.GetPointer();
	vtkChartMatrix * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkChartMatrixWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkChartMatrixWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkChartMatrixWrap *w = new VtkChartMatrixWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkChartMatrixWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkChartMatrixWrap>(info.Holder());
	vtkChartMatrix *native = (vtkChartMatrix *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkChartMatrix * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkChartMatrixWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkChartMatrixWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkChartMatrixWrap *w = new VtkChartMatrixWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartMatrixWrap::SetBorders(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkChartMatrixWrap>(info.Holder());
	vtkChartMatrix *native = (vtkChartMatrix *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->SetBorders(
						info[0]->Int32Value(),
						info[1]->Int32Value(),
						info[2]->Int32Value(),
						info[3]->Int32Value()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkChartMatrixWrap::Update(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkChartMatrixWrap *wrapper = ObjectWrap::Unwrap<VtkChartMatrixWrap>(info.Holder());
	vtkChartMatrix *native = (vtkChartMatrix *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Update();
}

