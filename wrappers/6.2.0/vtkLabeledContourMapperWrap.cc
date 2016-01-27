/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkMapperWrap.h"
#include "vtkLabeledContourMapperWrap.h"
#include "vtkObjectWrap.h"
#include "vtkRendererWrap.h"
#include "vtkActorWrap.h"
#include "vtkPolyDataWrap.h"
#include "vtkTextPropertyWrap.h"
#include "vtkTextPropertyCollectionWrap.h"
#include "vtkPolyDataMapperWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkLabeledContourMapperWrap::ptpl;

VtkLabeledContourMapperWrap::VtkLabeledContourMapperWrap()
{ }

VtkLabeledContourMapperWrap::VtkLabeledContourMapperWrap(vtkSmartPointer<vtkLabeledContourMapper> _native)
{ native = _native; }

VtkLabeledContourMapperWrap::~VtkLabeledContourMapperWrap()
{ }

void VtkLabeledContourMapperWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkLabeledContourMapper").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("LabeledContourMapper").ToLocalChecked(), ConstructorGetter);
}

void VtkLabeledContourMapperWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkLabeledContourMapperWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkMapperWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkMapperWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkLabeledContourMapperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "GetPolyDataMapper", GetPolyDataMapper);
	Nan::SetPrototypeMethod(tpl, "getPolyDataMapper", GetPolyDataMapper);

	Nan::SetPrototypeMethod(tpl, "GetTextProperties", GetTextProperties);
	Nan::SetPrototypeMethod(tpl, "getTextProperties", GetTextProperties);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "LabelVisibilityOff", LabelVisibilityOff);
	Nan::SetPrototypeMethod(tpl, "labelVisibilityOff", LabelVisibilityOff);

	Nan::SetPrototypeMethod(tpl, "LabelVisibilityOn", LabelVisibilityOn);
	Nan::SetPrototypeMethod(tpl, "labelVisibilityOn", LabelVisibilityOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInputData", SetInputData);
	Nan::SetPrototypeMethod(tpl, "setInputData", SetInputData);

	Nan::SetPrototypeMethod(tpl, "SetTextProperties", SetTextProperties);
	Nan::SetPrototypeMethod(tpl, "setTextProperties", SetTextProperties);

	Nan::SetPrototypeMethod(tpl, "SetTextProperty", SetTextProperty);
	Nan::SetPrototypeMethod(tpl, "setTextProperty", SetTextProperty);

	ptpl.Reset( tpl );
}

void VtkLabeledContourMapperWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkLabeledContourMapper> native = vtkSmartPointer<vtkLabeledContourMapper>::New();
		VtkLabeledContourMapperWrap* obj = new VtkLabeledContourMapperWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkLabeledContourMapperWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledContourMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledContourMapperWrap>(info.Holder());
	vtkLabeledContourMapper *native = (vtkLabeledContourMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkLabeledContourMapperWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledContourMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledContourMapperWrap>(info.Holder());
	vtkLabeledContourMapper *native = (vtkLabeledContourMapper *)wrapper->native.GetPointer();
	vtkPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
		VtkPolyDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPolyDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataWrap *w = new VtkPolyDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLabeledContourMapperWrap::GetPolyDataMapper(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledContourMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledContourMapperWrap>(info.Holder());
	vtkLabeledContourMapper *native = (vtkLabeledContourMapper *)wrapper->native.GetPointer();
	vtkPolyDataMapper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPolyDataMapper();
		VtkPolyDataMapperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPolyDataMapperWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataMapperWrap *w = new VtkPolyDataMapperWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLabeledContourMapperWrap::GetTextProperties(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledContourMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledContourMapperWrap>(info.Holder());
	vtkLabeledContourMapper *native = (vtkLabeledContourMapper *)wrapper->native.GetPointer();
	vtkTextPropertyCollection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextProperties();
		VtkTextPropertyCollectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTextPropertyCollectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTextPropertyCollectionWrap *w = new VtkTextPropertyCollectionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLabeledContourMapperWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledContourMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledContourMapperWrap>(info.Holder());
	vtkLabeledContourMapper *native = (vtkLabeledContourMapper *)wrapper->native.GetPointer();
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

void VtkLabeledContourMapperWrap::LabelVisibilityOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledContourMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledContourMapperWrap>(info.Holder());
	vtkLabeledContourMapper *native = (vtkLabeledContourMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LabelVisibilityOff();
}

void VtkLabeledContourMapperWrap::LabelVisibilityOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledContourMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledContourMapperWrap>(info.Holder());
	vtkLabeledContourMapper *native = (vtkLabeledContourMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LabelVisibilityOn();
}

void VtkLabeledContourMapperWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledContourMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledContourMapperWrap>(info.Holder());
	vtkLabeledContourMapper *native = (vtkLabeledContourMapper *)wrapper->native.GetPointer();
	vtkLabeledContourMapper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkLabeledContourMapperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkLabeledContourMapperWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLabeledContourMapperWrap *w = new VtkLabeledContourMapperWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLabeledContourMapperWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledContourMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledContourMapperWrap>(info.Holder());
	vtkLabeledContourMapper *native = (vtkLabeledContourMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkActorWrap::ptpl))->HasInstance(info[1]))
		{
			VtkActorWrap *a1 = ObjectWrap::Unwrap<VtkActorWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Render(
				(vtkRenderer *) a0->native.GetPointer(),
				(vtkActor *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabeledContourMapperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledContourMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledContourMapperWrap>(info.Holder());
	vtkLabeledContourMapper *native = (vtkLabeledContourMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkLabeledContourMapper * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkLabeledContourMapperWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkLabeledContourMapperWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkLabeledContourMapperWrap *w = new VtkLabeledContourMapperWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabeledContourMapperWrap::SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledContourMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledContourMapperWrap>(info.Holder());
	vtkLabeledContourMapper *native = (vtkLabeledContourMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPolyDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPolyDataWrap *a0 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputData(
			(vtkPolyData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabeledContourMapperWrap::SetTextProperties(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledContourMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledContourMapperWrap>(info.Holder());
	vtkLabeledContourMapper *native = (vtkLabeledContourMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTextPropertyCollectionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTextPropertyCollectionWrap *a0 = ObjectWrap::Unwrap<VtkTextPropertyCollectionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTextProperties(
			(vtkTextPropertyCollection *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabeledContourMapperWrap::SetTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledContourMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledContourMapperWrap>(info.Holder());
	vtkLabeledContourMapper *native = (vtkLabeledContourMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTextPropertyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTextPropertyWrap *a0 = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTextProperty(
			(vtkTextProperty *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
