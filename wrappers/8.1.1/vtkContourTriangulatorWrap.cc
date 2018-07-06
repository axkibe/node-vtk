/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkContourTriangulatorWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkIdListWrap.h"
#include "vtkPointsWrap.h"
#include "vtkCellArrayWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkContourTriangulatorWrap::ptpl;

VtkContourTriangulatorWrap::VtkContourTriangulatorWrap()
{ }

VtkContourTriangulatorWrap::VtkContourTriangulatorWrap(vtkSmartPointer<vtkContourTriangulator> _native)
{ native = _native; }

VtkContourTriangulatorWrap::~VtkContourTriangulatorWrap()
{ }

void VtkContourTriangulatorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkContourTriangulator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ContourTriangulator").ToLocalChecked(), ConstructorGetter);
}

void VtkContourTriangulatorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkContourTriangulatorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkContourTriangulatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetTriangulationError", GetTriangulationError);
	Nan::SetPrototypeMethod(tpl, "getTriangulationError", GetTriangulationError);

	Nan::SetPrototypeMethod(tpl, "GetTriangulationErrorDisplay", GetTriangulationErrorDisplay);
	Nan::SetPrototypeMethod(tpl, "getTriangulationErrorDisplay", GetTriangulationErrorDisplay);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetTriangulationErrorDisplay", SetTriangulationErrorDisplay);
	Nan::SetPrototypeMethod(tpl, "setTriangulationErrorDisplay", SetTriangulationErrorDisplay);

	Nan::SetPrototypeMethod(tpl, "TriangulatePolygon", TriangulatePolygon);
	Nan::SetPrototypeMethod(tpl, "triangulatePolygon", TriangulatePolygon);

	Nan::SetPrototypeMethod(tpl, "TriangulationErrorDisplayOff", TriangulationErrorDisplayOff);
	Nan::SetPrototypeMethod(tpl, "triangulationErrorDisplayOff", TriangulationErrorDisplayOff);

	Nan::SetPrototypeMethod(tpl, "TriangulationErrorDisplayOn", TriangulationErrorDisplayOn);
	Nan::SetPrototypeMethod(tpl, "triangulationErrorDisplayOn", TriangulationErrorDisplayOn);

#ifdef VTK_NODE_PLUS_VTKCONTOURTRIANGULATORWRAP_INITPTPL
	VTK_NODE_PLUS_VTKCONTOURTRIANGULATORWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkContourTriangulatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkContourTriangulator> native = vtkSmartPointer<vtkContourTriangulator>::New();
		VtkContourTriangulatorWrap* obj = new VtkContourTriangulatorWrap(native);
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

void VtkContourTriangulatorWrap::GetTriangulationError(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourTriangulatorWrap *wrapper = ObjectWrap::Unwrap<VtkContourTriangulatorWrap>(info.Holder());
	vtkContourTriangulator *native = (vtkContourTriangulator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTriangulationError();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkContourTriangulatorWrap::GetTriangulationErrorDisplay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourTriangulatorWrap *wrapper = ObjectWrap::Unwrap<VtkContourTriangulatorWrap>(info.Holder());
	vtkContourTriangulator *native = (vtkContourTriangulator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTriangulationErrorDisplay();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkContourTriangulatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourTriangulatorWrap *wrapper = ObjectWrap::Unwrap<VtkContourTriangulatorWrap>(info.Holder());
	vtkContourTriangulator *native = (vtkContourTriangulator *)wrapper->native.GetPointer();
	vtkContourTriangulator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkContourTriangulatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkContourTriangulatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkContourTriangulatorWrap *w = new VtkContourTriangulatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkContourTriangulatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourTriangulatorWrap *wrapper = ObjectWrap::Unwrap<VtkContourTriangulatorWrap>(info.Holder());
	vtkContourTriangulator *native = (vtkContourTriangulator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkContourTriangulator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkContourTriangulatorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkContourTriangulatorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkContourTriangulatorWrap *w = new VtkContourTriangulatorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkContourTriangulatorWrap::SetTriangulationErrorDisplay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourTriangulatorWrap *wrapper = ObjectWrap::Unwrap<VtkContourTriangulatorWrap>(info.Holder());
	vtkContourTriangulator *native = (vtkContourTriangulator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTriangulationErrorDisplay(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkContourTriangulatorWrap::TriangulatePolygon(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourTriangulatorWrap *wrapper = ObjectWrap::Unwrap<VtkContourTriangulatorWrap>(info.Holder());
	vtkContourTriangulator *native = (vtkContourTriangulator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[0]))
	{
		VtkIdListWrap *a0 = ObjectWrap::Unwrap<VtkIdListWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[1]))
		{
			VtkPointsWrap *a1 = ObjectWrap::Unwrap<VtkPointsWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkCellArrayWrap::ptpl))->HasInstance(info[2]))
			{
				VtkCellArrayWrap *a2 = ObjectWrap::Unwrap<VtkCellArrayWrap>(info[2]->ToObject());
				int r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->TriangulatePolygon(
					(vtkIdList *) a0->native.GetPointer(),
					(vtkPoints *) a1->native.GetPointer(),
					(vtkCellArray *) a2->native.GetPointer()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkContourTriangulatorWrap::TriangulationErrorDisplayOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourTriangulatorWrap *wrapper = ObjectWrap::Unwrap<VtkContourTriangulatorWrap>(info.Holder());
	vtkContourTriangulator *native = (vtkContourTriangulator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TriangulationErrorDisplayOff();
}

void VtkContourTriangulatorWrap::TriangulationErrorDisplayOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourTriangulatorWrap *wrapper = ObjectWrap::Unwrap<VtkContourTriangulatorWrap>(info.Holder());
	vtkContourTriangulator *native = (vtkContourTriangulator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->TriangulationErrorDisplayOn();
}

