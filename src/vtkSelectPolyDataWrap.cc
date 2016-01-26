/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkSelectPolyDataWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPointsWrap.h"
#include "vtkPolyDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkSelectPolyDataWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkSelectPolyDataWrap::ptpl;

VtkSelectPolyDataWrap::VtkSelectPolyDataWrap()
{ }

VtkSelectPolyDataWrap::VtkSelectPolyDataWrap(vtkSmartPointer<vtkSelectPolyData> _native)
{ native = _native; }

VtkSelectPolyDataWrap::~VtkSelectPolyDataWrap()
{ }

void VtkSelectPolyDataWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSelectPolyData").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SelectPolyData").ToLocalChecked(), ConstructorGetter);
}

void VtkSelectPolyDataWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSelectPolyDataWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSelectPolyDataWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GenerateSelectionScalarsOff", GenerateSelectionScalarsOff);
	Nan::SetPrototypeMethod(tpl, "generateSelectionScalarsOff", GenerateSelectionScalarsOff);

	Nan::SetPrototypeMethod(tpl, "GenerateSelectionScalarsOn", GenerateSelectionScalarsOn);
	Nan::SetPrototypeMethod(tpl, "generateSelectionScalarsOn", GenerateSelectionScalarsOn);

	Nan::SetPrototypeMethod(tpl, "GenerateUnselectedOutputOff", GenerateUnselectedOutputOff);
	Nan::SetPrototypeMethod(tpl, "generateUnselectedOutputOff", GenerateUnselectedOutputOff);

	Nan::SetPrototypeMethod(tpl, "GenerateUnselectedOutputOn", GenerateUnselectedOutputOn);
	Nan::SetPrototypeMethod(tpl, "generateUnselectedOutputOn", GenerateUnselectedOutputOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetGenerateSelectionScalars", GetGenerateSelectionScalars);
	Nan::SetPrototypeMethod(tpl, "getGenerateSelectionScalars", GetGenerateSelectionScalars);

	Nan::SetPrototypeMethod(tpl, "GetGenerateUnselectedOutput", GetGenerateUnselectedOutput);
	Nan::SetPrototypeMethod(tpl, "getGenerateUnselectedOutput", GetGenerateUnselectedOutput);

	Nan::SetPrototypeMethod(tpl, "GetInsideOut", GetInsideOut);
	Nan::SetPrototypeMethod(tpl, "getInsideOut", GetInsideOut);

	Nan::SetPrototypeMethod(tpl, "GetLoop", GetLoop);
	Nan::SetPrototypeMethod(tpl, "getLoop", GetLoop);

	Nan::SetPrototypeMethod(tpl, "GetSelectionEdges", GetSelectionEdges);
	Nan::SetPrototypeMethod(tpl, "getSelectionEdges", GetSelectionEdges);

	Nan::SetPrototypeMethod(tpl, "GetSelectionMode", GetSelectionMode);
	Nan::SetPrototypeMethod(tpl, "getSelectionMode", GetSelectionMode);

	Nan::SetPrototypeMethod(tpl, "GetSelectionModeAsString", GetSelectionModeAsString);
	Nan::SetPrototypeMethod(tpl, "getSelectionModeAsString", GetSelectionModeAsString);

	Nan::SetPrototypeMethod(tpl, "GetSelectionModeMaxValue", GetSelectionModeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getSelectionModeMaxValue", GetSelectionModeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetSelectionModeMinValue", GetSelectionModeMinValue);
	Nan::SetPrototypeMethod(tpl, "getSelectionModeMinValue", GetSelectionModeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetUnselectedOutput", GetUnselectedOutput);
	Nan::SetPrototypeMethod(tpl, "getUnselectedOutput", GetUnselectedOutput);

	Nan::SetPrototypeMethod(tpl, "InsideOutOff", InsideOutOff);
	Nan::SetPrototypeMethod(tpl, "insideOutOff", InsideOutOff);

	Nan::SetPrototypeMethod(tpl, "InsideOutOn", InsideOutOn);
	Nan::SetPrototypeMethod(tpl, "insideOutOn", InsideOutOn);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetClosestPoint", SetClosestPoint);
	Nan::SetPrototypeMethod(tpl, "setClosestPoint", SetClosestPoint);

	Nan::SetPrototypeMethod(tpl, "SetGenerateSelectionScalars", SetGenerateSelectionScalars);
	Nan::SetPrototypeMethod(tpl, "setGenerateSelectionScalars", SetGenerateSelectionScalars);

	Nan::SetPrototypeMethod(tpl, "SetGenerateUnselectedOutput", SetGenerateUnselectedOutput);
	Nan::SetPrototypeMethod(tpl, "setGenerateUnselectedOutput", SetGenerateUnselectedOutput);

	Nan::SetPrototypeMethod(tpl, "SetInsideOut", SetInsideOut);
	Nan::SetPrototypeMethod(tpl, "setInsideOut", SetInsideOut);

	Nan::SetPrototypeMethod(tpl, "SetLoop", SetLoop);
	Nan::SetPrototypeMethod(tpl, "setLoop", SetLoop);

	Nan::SetPrototypeMethod(tpl, "SetSelectionMode", SetSelectionMode);
	Nan::SetPrototypeMethod(tpl, "setSelectionMode", SetSelectionMode);

	Nan::SetPrototypeMethod(tpl, "SetSelectionModeToClosestPointRegion", SetSelectionModeToClosestPointRegion);
	Nan::SetPrototypeMethod(tpl, "setSelectionModeToClosestPointRegion", SetSelectionModeToClosestPointRegion);

	Nan::SetPrototypeMethod(tpl, "SetSelectionModeToLargestRegion", SetSelectionModeToLargestRegion);
	Nan::SetPrototypeMethod(tpl, "setSelectionModeToLargestRegion", SetSelectionModeToLargestRegion);

	Nan::SetPrototypeMethod(tpl, "SetSelectionModeToSmallestRegion", SetSelectionModeToSmallestRegion);
	Nan::SetPrototypeMethod(tpl, "setSelectionModeToSmallestRegion", SetSelectionModeToSmallestRegion);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkSelectPolyDataWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSelectPolyData> native = vtkSmartPointer<vtkSelectPolyData>::New();
		VtkSelectPolyDataWrap* obj = new VtkSelectPolyDataWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkSelectPolyDataWrap::GenerateSelectionScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkSelectPolyDataWrap>(info.Holder());
	vtkSelectPolyData *native = (vtkSelectPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateSelectionScalarsOff();
}

void VtkSelectPolyDataWrap::GenerateSelectionScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkSelectPolyDataWrap>(info.Holder());
	vtkSelectPolyData *native = (vtkSelectPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateSelectionScalarsOn();
}

void VtkSelectPolyDataWrap::GenerateUnselectedOutputOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkSelectPolyDataWrap>(info.Holder());
	vtkSelectPolyData *native = (vtkSelectPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateUnselectedOutputOff();
}

void VtkSelectPolyDataWrap::GenerateUnselectedOutputOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkSelectPolyDataWrap>(info.Holder());
	vtkSelectPolyData *native = (vtkSelectPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateUnselectedOutputOn();
}

void VtkSelectPolyDataWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkSelectPolyDataWrap>(info.Holder());
	vtkSelectPolyData *native = (vtkSelectPolyData *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSelectPolyDataWrap::GetGenerateSelectionScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkSelectPolyDataWrap>(info.Holder());
	vtkSelectPolyData *native = (vtkSelectPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateSelectionScalars();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSelectPolyDataWrap::GetGenerateUnselectedOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkSelectPolyDataWrap>(info.Holder());
	vtkSelectPolyData *native = (vtkSelectPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateUnselectedOutput();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSelectPolyDataWrap::GetInsideOut(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkSelectPolyDataWrap>(info.Holder());
	vtkSelectPolyData *native = (vtkSelectPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInsideOut();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSelectPolyDataWrap::GetLoop(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkSelectPolyDataWrap>(info.Holder());
	vtkSelectPolyData *native = (vtkSelectPolyData *)wrapper->native.GetPointer();
	vtkPoints * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLoop();
		VtkPointsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPointsWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPointsWrap *w = new VtkPointsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSelectPolyDataWrap::GetSelectionEdges(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkSelectPolyDataWrap>(info.Holder());
	vtkSelectPolyData *native = (vtkSelectPolyData *)wrapper->native.GetPointer();
	vtkPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectionEdges();
		VtkPolyDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPolyDataWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataWrap *w = new VtkPolyDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSelectPolyDataWrap::GetSelectionMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkSelectPolyDataWrap>(info.Holder());
	vtkSelectPolyData *native = (vtkSelectPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectionMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSelectPolyDataWrap::GetSelectionModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkSelectPolyDataWrap>(info.Holder());
	vtkSelectPolyData *native = (vtkSelectPolyData *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectionModeAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSelectPolyDataWrap::GetSelectionModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkSelectPolyDataWrap>(info.Holder());
	vtkSelectPolyData *native = (vtkSelectPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectionModeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSelectPolyDataWrap::GetSelectionModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkSelectPolyDataWrap>(info.Holder());
	vtkSelectPolyData *native = (vtkSelectPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectionModeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSelectPolyDataWrap::GetUnselectedOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkSelectPolyDataWrap>(info.Holder());
	vtkSelectPolyData *native = (vtkSelectPolyData *)wrapper->native.GetPointer();
	vtkPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUnselectedOutput();
		VtkPolyDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPolyDataWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataWrap *w = new VtkPolyDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSelectPolyDataWrap::InsideOutOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkSelectPolyDataWrap>(info.Holder());
	vtkSelectPolyData *native = (vtkSelectPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InsideOutOff();
}

void VtkSelectPolyDataWrap::InsideOutOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkSelectPolyDataWrap>(info.Holder());
	vtkSelectPolyData *native = (vtkSelectPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InsideOutOn();
}

void VtkSelectPolyDataWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkSelectPolyDataWrap>(info.Holder());
	vtkSelectPolyData *native = (vtkSelectPolyData *)wrapper->native.GetPointer();
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

void VtkSelectPolyDataWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkSelectPolyDataWrap>(info.Holder());
	vtkSelectPolyData *native = (vtkSelectPolyData *)wrapper->native.GetPointer();
	vtkSelectPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkSelectPolyDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkSelectPolyDataWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSelectPolyDataWrap *w = new VtkSelectPolyDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSelectPolyDataWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkSelectPolyDataWrap>(info.Holder());
	vtkSelectPolyData *native = (vtkSelectPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSelectPolyData * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkSelectPolyDataWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkSelectPolyDataWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSelectPolyDataWrap *w = new VtkSelectPolyDataWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectPolyDataWrap::SetClosestPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkSelectPolyDataWrap>(info.Holder());
	vtkSelectPolyData *native = (vtkSelectPolyData *)wrapper->native.GetPointer();
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
				native->SetClosestPoint(
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

void VtkSelectPolyDataWrap::SetGenerateSelectionScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkSelectPolyDataWrap>(info.Holder());
	vtkSelectPolyData *native = (vtkSelectPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGenerateSelectionScalars(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectPolyDataWrap::SetGenerateUnselectedOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkSelectPolyDataWrap>(info.Holder());
	vtkSelectPolyData *native = (vtkSelectPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGenerateUnselectedOutput(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectPolyDataWrap::SetInsideOut(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkSelectPolyDataWrap>(info.Holder());
	vtkSelectPolyData *native = (vtkSelectPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInsideOut(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectPolyDataWrap::SetLoop(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkSelectPolyDataWrap>(info.Holder());
	vtkSelectPolyData *native = (vtkSelectPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPointsWrap *a0 = ObjectWrap::Unwrap<VtkPointsWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLoop(
			(vtkPoints *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectPolyDataWrap::SetSelectionMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkSelectPolyDataWrap>(info.Holder());
	vtkSelectPolyData *native = (vtkSelectPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectionMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectPolyDataWrap::SetSelectionModeToClosestPointRegion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkSelectPolyDataWrap>(info.Holder());
	vtkSelectPolyData *native = (vtkSelectPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetSelectionModeToClosestPointRegion();
}

void VtkSelectPolyDataWrap::SetSelectionModeToLargestRegion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkSelectPolyDataWrap>(info.Holder());
	vtkSelectPolyData *native = (vtkSelectPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetSelectionModeToLargestRegion();
}

void VtkSelectPolyDataWrap::SetSelectionModeToSmallestRegion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkSelectPolyDataWrap>(info.Holder());
	vtkSelectPolyData *native = (vtkSelectPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetSelectionModeToSmallestRegion();
}

