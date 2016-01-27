/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkViewWrap.h"
#include "vtkDataRepresentationWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "vtkDataObjectWrap.h"
#include "vtkViewThemeWrap.h"
#include "vtkCommandWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkViewWrap::ptpl;

VtkViewWrap::VtkViewWrap()
{ }

VtkViewWrap::VtkViewWrap(vtkSmartPointer<vtkView> _native)
{ native = _native; }

VtkViewWrap::~VtkViewWrap()
{ }

void VtkViewWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkView").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("View").ToLocalChecked(), ConstructorGetter);
}

void VtkViewWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkViewWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkViewWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddRepresentation", AddRepresentation);
	Nan::SetPrototypeMethod(tpl, "addRepresentation", AddRepresentation);

	Nan::SetPrototypeMethod(tpl, "AddRepresentationFromInput", AddRepresentationFromInput);
	Nan::SetPrototypeMethod(tpl, "addRepresentationFromInput", AddRepresentationFromInput);

	Nan::SetPrototypeMethod(tpl, "AddRepresentationFromInputConnection", AddRepresentationFromInputConnection);
	Nan::SetPrototypeMethod(tpl, "addRepresentationFromInputConnection", AddRepresentationFromInputConnection);

	Nan::SetPrototypeMethod(tpl, "ApplyViewTheme", ApplyViewTheme);
	Nan::SetPrototypeMethod(tpl, "applyViewTheme", ApplyViewTheme);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfRepresentations", GetNumberOfRepresentations);
	Nan::SetPrototypeMethod(tpl, "getNumberOfRepresentations", GetNumberOfRepresentations);

	Nan::SetPrototypeMethod(tpl, "GetObserver", GetObserver);
	Nan::SetPrototypeMethod(tpl, "getObserver", GetObserver);

	Nan::SetPrototypeMethod(tpl, "GetRepresentation", GetRepresentation);
	Nan::SetPrototypeMethod(tpl, "getRepresentation", GetRepresentation);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RegisterProgress", RegisterProgress);
	Nan::SetPrototypeMethod(tpl, "registerProgress", RegisterProgress);

	Nan::SetPrototypeMethod(tpl, "RemoveAllRepresentations", RemoveAllRepresentations);
	Nan::SetPrototypeMethod(tpl, "removeAllRepresentations", RemoveAllRepresentations);

	Nan::SetPrototypeMethod(tpl, "RemoveRepresentation", RemoveRepresentation);
	Nan::SetPrototypeMethod(tpl, "removeRepresentation", RemoveRepresentation);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetRepresentation", SetRepresentation);
	Nan::SetPrototypeMethod(tpl, "setRepresentation", SetRepresentation);

	Nan::SetPrototypeMethod(tpl, "SetRepresentationFromInput", SetRepresentationFromInput);
	Nan::SetPrototypeMethod(tpl, "setRepresentationFromInput", SetRepresentationFromInput);

	Nan::SetPrototypeMethod(tpl, "SetRepresentationFromInputConnection", SetRepresentationFromInputConnection);
	Nan::SetPrototypeMethod(tpl, "setRepresentationFromInputConnection", SetRepresentationFromInputConnection);

	Nan::SetPrototypeMethod(tpl, "UnRegisterProgress", UnRegisterProgress);
	Nan::SetPrototypeMethod(tpl, "unRegisterProgress", UnRegisterProgress);

	Nan::SetPrototypeMethod(tpl, "Update", Update);
	Nan::SetPrototypeMethod(tpl, "update", Update);

	ptpl.Reset( tpl );
}

void VtkViewWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkView> native = vtkSmartPointer<vtkView>::New();
		VtkViewWrap* obj = new VtkViewWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkViewWrap::AddRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewWrap *wrapper = ObjectWrap::Unwrap<VtkViewWrap>(info.Holder());
	vtkView *native = (vtkView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataRepresentationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataRepresentationWrap *a0 = ObjectWrap::Unwrap<VtkDataRepresentationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddRepresentation(
			(vtkDataRepresentation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewWrap::AddRepresentationFromInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewWrap *wrapper = ObjectWrap::Unwrap<VtkViewWrap>(info.Holder());
	vtkView *native = (vtkView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
		vtkDataRepresentation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->AddRepresentationFromInput(
			(vtkDataObject *) a0->native.GetPointer()
		);
			VtkDataRepresentationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDataRepresentationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDataRepresentationWrap *w = new VtkDataRepresentationWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewWrap::AddRepresentationFromInputConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewWrap *wrapper = ObjectWrap::Unwrap<VtkViewWrap>(info.Holder());
	vtkView *native = (vtkView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
		vtkDataRepresentation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->AddRepresentationFromInputConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
			VtkDataRepresentationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDataRepresentationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDataRepresentationWrap *w = new VtkDataRepresentationWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewWrap::ApplyViewTheme(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewWrap *wrapper = ObjectWrap::Unwrap<VtkViewWrap>(info.Holder());
	vtkView *native = (vtkView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewThemeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewThemeWrap *a0 = ObjectWrap::Unwrap<VtkViewThemeWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ApplyViewTheme(
			(vtkViewTheme *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewWrap *wrapper = ObjectWrap::Unwrap<VtkViewWrap>(info.Holder());
	vtkView *native = (vtkView *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkViewWrap::GetNumberOfRepresentations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewWrap *wrapper = ObjectWrap::Unwrap<VtkViewWrap>(info.Holder());
	vtkView *native = (vtkView *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfRepresentations();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkViewWrap::GetObserver(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewWrap *wrapper = ObjectWrap::Unwrap<VtkViewWrap>(info.Holder());
	vtkView *native = (vtkView *)wrapper->native.GetPointer();
	vtkCommand * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetObserver();
		VtkCommandWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCommandWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCommandWrap *w = new VtkCommandWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkViewWrap::GetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewWrap *wrapper = ObjectWrap::Unwrap<VtkViewWrap>(info.Holder());
	vtkView *native = (vtkView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkDataRepresentation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetRepresentation(
			info[0]->Int32Value()
		);
			VtkDataRepresentationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDataRepresentationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDataRepresentationWrap *w = new VtkDataRepresentationWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewWrap *wrapper = ObjectWrap::Unwrap<VtkViewWrap>(info.Holder());
	vtkView *native = (vtkView *)wrapper->native.GetPointer();
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

void VtkViewWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewWrap *wrapper = ObjectWrap::Unwrap<VtkViewWrap>(info.Holder());
	vtkView *native = (vtkView *)wrapper->native.GetPointer();
	vtkView * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkViewWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkViewWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkViewWrap *w = new VtkViewWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkViewWrap::RegisterProgress(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewWrap *wrapper = ObjectWrap::Unwrap<VtkViewWrap>(info.Holder());
	vtkView *native = (vtkView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsString())
		{
			Nan::Utf8String a1(info[1]);
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->RegisterProgress(
				(vtkObject *) a0->native.GetPointer(),
				*a1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewWrap::RemoveAllRepresentations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewWrap *wrapper = ObjectWrap::Unwrap<VtkViewWrap>(info.Holder());
	vtkView *native = (vtkView *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveAllRepresentations();
}

void VtkViewWrap::RemoveRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewWrap *wrapper = ObjectWrap::Unwrap<VtkViewWrap>(info.Holder());
	vtkView *native = (vtkView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveRepresentation(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewWrap *wrapper = ObjectWrap::Unwrap<VtkViewWrap>(info.Holder());
	vtkView *native = (vtkView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkView * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkViewWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkViewWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkViewWrap *w = new VtkViewWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewWrap::SetRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewWrap *wrapper = ObjectWrap::Unwrap<VtkViewWrap>(info.Holder());
	vtkView *native = (vtkView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataRepresentationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataRepresentationWrap *a0 = ObjectWrap::Unwrap<VtkDataRepresentationWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRepresentation(
			(vtkDataRepresentation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewWrap::SetRepresentationFromInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewWrap *wrapper = ObjectWrap::Unwrap<VtkViewWrap>(info.Holder());
	vtkView *native = (vtkView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
		vtkDataRepresentation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SetRepresentationFromInput(
			(vtkDataObject *) a0->native.GetPointer()
		);
			VtkDataRepresentationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDataRepresentationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDataRepresentationWrap *w = new VtkDataRepresentationWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewWrap::SetRepresentationFromInputConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewWrap *wrapper = ObjectWrap::Unwrap<VtkViewWrap>(info.Holder());
	vtkView *native = (vtkView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
		vtkDataRepresentation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SetRepresentationFromInputConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
			VtkDataRepresentationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDataRepresentationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDataRepresentationWrap *w = new VtkDataRepresentationWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewWrap::UnRegisterProgress(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewWrap *wrapper = ObjectWrap::Unwrap<VtkViewWrap>(info.Holder());
	vtkView *native = (vtkView *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->UnRegisterProgress(
			(vtkObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkViewWrap::Update(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkViewWrap *wrapper = ObjectWrap::Unwrap<VtkViewWrap>(info.Holder());
	vtkView *native = (vtkView *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Update();
}

