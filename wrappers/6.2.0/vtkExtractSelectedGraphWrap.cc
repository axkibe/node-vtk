/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkGraphAlgorithmWrap.h"
#include "vtkExtractSelectedGraphWrap.h"
#include "vtkObjectWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "vtkInformationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkExtractSelectedGraphWrap::ptpl;

VtkExtractSelectedGraphWrap::VtkExtractSelectedGraphWrap()
{ }

VtkExtractSelectedGraphWrap::VtkExtractSelectedGraphWrap(vtkSmartPointer<vtkExtractSelectedGraph> _native)
{ native = _native; }

VtkExtractSelectedGraphWrap::~VtkExtractSelectedGraphWrap()
{ }

void VtkExtractSelectedGraphWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkExtractSelectedGraph").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ExtractSelectedGraph").ToLocalChecked(), ConstructorGetter);
}

void VtkExtractSelectedGraphWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkExtractSelectedGraphWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkGraphAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkGraphAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkExtractSelectedGraphWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "FillInputPortInformation", FillInputPortInformation);
	Nan::SetPrototypeMethod(tpl, "fillInputPortInformation", FillInputPortInformation);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveIsolatedVerticesOff", RemoveIsolatedVerticesOff);
	Nan::SetPrototypeMethod(tpl, "removeIsolatedVerticesOff", RemoveIsolatedVerticesOff);

	Nan::SetPrototypeMethod(tpl, "RemoveIsolatedVerticesOn", RemoveIsolatedVerticesOn);
	Nan::SetPrototypeMethod(tpl, "removeIsolatedVerticesOn", RemoveIsolatedVerticesOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAnnotationLayersConnection", SetAnnotationLayersConnection);
	Nan::SetPrototypeMethod(tpl, "setAnnotationLayersConnection", SetAnnotationLayersConnection);

	Nan::SetPrototypeMethod(tpl, "SetSelectionConnection", SetSelectionConnection);
	Nan::SetPrototypeMethod(tpl, "setSelectionConnection", SetSelectionConnection);

	ptpl.Reset( tpl );
}

void VtkExtractSelectedGraphWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkExtractSelectedGraph> native = vtkSmartPointer<vtkExtractSelectedGraph>::New();
		VtkExtractSelectedGraphWrap* obj = new VtkExtractSelectedGraphWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkExtractSelectedGraphWrap::FillInputPortInformation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectedGraphWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectedGraphWrap>(info.Holder());
	vtkExtractSelectedGraph *native = (vtkExtractSelectedGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[1]))
		{
			VtkInformationWrap *a1 = ObjectWrap::Unwrap<VtkInformationWrap>(info[1]->ToObject());
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->FillInputPortInformation(
				info[0]->Int32Value(),
				(vtkInformation *) a1->native.GetPointer()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractSelectedGraphWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectedGraphWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectedGraphWrap>(info.Holder());
	vtkExtractSelectedGraph *native = (vtkExtractSelectedGraph *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkExtractSelectedGraphWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectedGraphWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectedGraphWrap>(info.Holder());
	vtkExtractSelectedGraph *native = (vtkExtractSelectedGraph *)wrapper->native.GetPointer();
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

void VtkExtractSelectedGraphWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectedGraphWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectedGraphWrap>(info.Holder());
	vtkExtractSelectedGraph *native = (vtkExtractSelectedGraph *)wrapper->native.GetPointer();
	vtkExtractSelectedGraph * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkExtractSelectedGraphWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkExtractSelectedGraphWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkExtractSelectedGraphWrap *w = new VtkExtractSelectedGraphWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExtractSelectedGraphWrap::RemoveIsolatedVerticesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectedGraphWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectedGraphWrap>(info.Holder());
	vtkExtractSelectedGraph *native = (vtkExtractSelectedGraph *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveIsolatedVerticesOff();
}

void VtkExtractSelectedGraphWrap::RemoveIsolatedVerticesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectedGraphWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectedGraphWrap>(info.Holder());
	vtkExtractSelectedGraph *native = (vtkExtractSelectedGraph *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveIsolatedVerticesOn();
}

void VtkExtractSelectedGraphWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectedGraphWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectedGraphWrap>(info.Holder());
	vtkExtractSelectedGraph *native = (vtkExtractSelectedGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkExtractSelectedGraph * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkExtractSelectedGraphWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkExtractSelectedGraphWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkExtractSelectedGraphWrap *w = new VtkExtractSelectedGraphWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractSelectedGraphWrap::SetAnnotationLayersConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectedGraphWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectedGraphWrap>(info.Holder());
	vtkExtractSelectedGraph *native = (vtkExtractSelectedGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAnnotationLayersConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractSelectedGraphWrap::SetSelectionConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractSelectedGraphWrap *wrapper = ObjectWrap::Unwrap<VtkExtractSelectedGraphWrap>(info.Holder());
	vtkExtractSelectedGraph *native = (vtkExtractSelectedGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectionConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

