/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkHardwareSelectorWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkRendererWrap.h"
#include "vtkSelectionWrap.h"
#include "vtkPropWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkHardwareSelectorWrap::ptpl;

VtkHardwareSelectorWrap::VtkHardwareSelectorWrap()
{ }

VtkHardwareSelectorWrap::VtkHardwareSelectorWrap(vtkSmartPointer<vtkHardwareSelector> _native)
{ native = _native; }

VtkHardwareSelectorWrap::~VtkHardwareSelectorWrap()
{ }

void VtkHardwareSelectorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkHardwareSelector").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("HardwareSelector").ToLocalChecked(), ConstructorGetter);
}

void VtkHardwareSelectorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkHardwareSelectorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkHardwareSelectorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BeginRenderProp", BeginRenderProp);
	Nan::SetPrototypeMethod(tpl, "beginRenderProp", BeginRenderProp);

	Nan::SetPrototypeMethod(tpl, "CaptureBuffers", CaptureBuffers);
	Nan::SetPrototypeMethod(tpl, "captureBuffers", CaptureBuffers);

	Nan::SetPrototypeMethod(tpl, "ClearBuffers", ClearBuffers);
	Nan::SetPrototypeMethod(tpl, "clearBuffers", ClearBuffers);

	Nan::SetPrototypeMethod(tpl, "Convert", Convert);
	Nan::SetPrototypeMethod(tpl, "convert", Convert);

	Nan::SetPrototypeMethod(tpl, "EndRenderProp", EndRenderProp);
	Nan::SetPrototypeMethod(tpl, "endRenderProp", EndRenderProp);

	Nan::SetPrototypeMethod(tpl, "GenerateSelection", GenerateSelection);
	Nan::SetPrototypeMethod(tpl, "generateSelection", GenerateSelection);

	Nan::SetPrototypeMethod(tpl, "GetArea", GetArea);
	Nan::SetPrototypeMethod(tpl, "getArea", GetArea);

	Nan::SetPrototypeMethod(tpl, "GetCurrentPass", GetCurrentPass);
	Nan::SetPrototypeMethod(tpl, "getCurrentPass", GetCurrentPass);

	Nan::SetPrototypeMethod(tpl, "GetFieldAssociation", GetFieldAssociation);
	Nan::SetPrototypeMethod(tpl, "getFieldAssociation", GetFieldAssociation);

	Nan::SetPrototypeMethod(tpl, "GetProcessID", GetProcessID);
	Nan::SetPrototypeMethod(tpl, "getProcessID", GetProcessID);

	Nan::SetPrototypeMethod(tpl, "GetPropColorValue", GetPropColorValue);
	Nan::SetPrototypeMethod(tpl, "getPropColorValue", GetPropColorValue);

	Nan::SetPrototypeMethod(tpl, "GetPropFromID", GetPropFromID);
	Nan::SetPrototypeMethod(tpl, "getPropFromID", GetPropFromID);

	Nan::SetPrototypeMethod(tpl, "GetRenderer", GetRenderer);
	Nan::SetPrototypeMethod(tpl, "getRenderer", GetRenderer);

	Nan::SetPrototypeMethod(tpl, "GetUseProcessIdFromData", GetUseProcessIdFromData);
	Nan::SetPrototypeMethod(tpl, "getUseProcessIdFromData", GetUseProcessIdFromData);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RenderCompositeIndex", RenderCompositeIndex);
	Nan::SetPrototypeMethod(tpl, "renderCompositeIndex", RenderCompositeIndex);

	Nan::SetPrototypeMethod(tpl, "RenderProcessId", RenderProcessId);
	Nan::SetPrototypeMethod(tpl, "renderProcessId", RenderProcessId);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "Select", Select);
	Nan::SetPrototypeMethod(tpl, "select", Select);

	Nan::SetPrototypeMethod(tpl, "SetArea", SetArea);
	Nan::SetPrototypeMethod(tpl, "setArea", SetArea);

	Nan::SetPrototypeMethod(tpl, "SetFieldAssociation", SetFieldAssociation);
	Nan::SetPrototypeMethod(tpl, "setFieldAssociation", SetFieldAssociation);

	Nan::SetPrototypeMethod(tpl, "SetProcessID", SetProcessID);
	Nan::SetPrototypeMethod(tpl, "setProcessID", SetProcessID);

	Nan::SetPrototypeMethod(tpl, "SetPropColorValue", SetPropColorValue);
	Nan::SetPrototypeMethod(tpl, "setPropColorValue", SetPropColorValue);

	Nan::SetPrototypeMethod(tpl, "SetRenderer", SetRenderer);
	Nan::SetPrototypeMethod(tpl, "setRenderer", SetRenderer);

	Nan::SetPrototypeMethod(tpl, "SetUseProcessIdFromData", SetUseProcessIdFromData);
	Nan::SetPrototypeMethod(tpl, "setUseProcessIdFromData", SetUseProcessIdFromData);

#ifdef VTK_NODE_PLUS_VTKHARDWARESELECTORWRAP_INITPTPL
	VTK_NODE_PLUS_VTKHARDWARESELECTORWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkHardwareSelectorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkHardwareSelector> native = vtkSmartPointer<vtkHardwareSelector>::New();
		VtkHardwareSelectorWrap* obj = new VtkHardwareSelectorWrap(native);
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

void VtkHardwareSelectorWrap::BeginRenderProp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BeginRenderProp();
}

void VtkHardwareSelectorWrap::CaptureBuffers(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->CaptureBuffers();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHardwareSelectorWrap::ClearBuffers(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClearBuffers();
}

void VtkHardwareSelectorWrap::Convert(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsFloat32Array())
		{
			v8::Local<v8::Float32Array>a1(v8::Local<v8::Float32Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Convert(
				info[0]->Int32Value(),
				(float *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			float b1[3];
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 3; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Convert(
				info[0]->Int32Value(),
				b1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHardwareSelectorWrap::EndRenderProp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EndRenderProp();
}

void VtkHardwareSelectorWrap::GenerateSelection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsUint32Array())
	{
		v8::Local<v8::Uint32Array>a0(v8::Local<v8::Uint32Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		vtkSelection * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GenerateSelection(
			(unsigned int *)(a0->Buffer()->GetContents().Data())
		);
		VtkSelectionWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSelectionWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSelectionWrap *w = new VtkSelectionWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		unsigned int b0[4];
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 4; i++ )
		{
			if( !a0->Get(i)->IsUint32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Uint32Value();
		}
		vtkSelection * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GenerateSelection(
			b0
		);
		VtkSelectionWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSelectionWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSelectionWrap *w = new VtkSelectionWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsUint32())
	{
		if(info.Length() > 1 && info[1]->IsUint32())
		{
			if(info.Length() > 2 && info[2]->IsUint32())
			{
				if(info.Length() > 3 && info[3]->IsUint32())
				{
					vtkSelection * r;
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					r = native->GenerateSelection(
						info[0]->Uint32Value(),
						info[1]->Uint32Value(),
						info[2]->Uint32Value(),
						info[3]->Uint32Value()
					);
					VtkSelectionWrap::InitPtpl();
					v8::Local<v8::Value> argv[1] =
						{ Nan::New(vtkNodeJsNoWrap) };
					v8::Local<v8::Function> cons =
						Nan::New<v8::FunctionTemplate>(VtkSelectionWrap::ptpl)->GetFunction();
					v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
					VtkSelectionWrap *w = new VtkSelectionWrap();
					w->native = r;
					w->Wrap(wo);
					info.GetReturnValue().Set(wo);
					return;
				}
			}
		}
	}
	vtkSelection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GenerateSelection();
	VtkSelectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSelectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSelectionWrap *w = new VtkSelectionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHardwareSelectorWrap::GetArea(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	unsigned int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetArea();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 4 * sizeof(unsigned int));
	Local<v8::Uint32Array> at = v8::Uint32Array::New(ab, 0, 4);
	memcpy(ab->GetContents().Data(), r, 4 * sizeof(unsigned int));
	info.GetReturnValue().Set(at);
}

void VtkHardwareSelectorWrap::GetCurrentPass(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCurrentPass();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHardwareSelectorWrap::GetFieldAssociation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFieldAssociation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHardwareSelectorWrap::GetProcessID(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProcessID();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHardwareSelectorWrap::GetPropColorValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	float const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPropColorValue();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(float));
	Local<v8::Float32Array> at = v8::Float32Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(float));
	info.GetReturnValue().Set(at);
}

void VtkHardwareSelectorWrap::GetPropFromID(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkProp * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetPropFromID(
			info[0]->Int32Value()
		);
		VtkPropWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPropWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPropWrap *w = new VtkPropWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHardwareSelectorWrap::GetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	vtkRenderer * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRenderer();
	VtkRendererWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRendererWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRendererWrap *w = new VtkRendererWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHardwareSelectorWrap::GetUseProcessIdFromData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseProcessIdFromData();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHardwareSelectorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	vtkHardwareSelector * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkHardwareSelectorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHardwareSelectorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHardwareSelectorWrap *w = new VtkHardwareSelectorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHardwareSelectorWrap::RenderCompositeIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RenderCompositeIndex(
			info[0]->Uint32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHardwareSelectorWrap::RenderProcessId(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RenderProcessId(
			info[0]->Uint32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHardwareSelectorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkHardwareSelector * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkHardwareSelectorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkHardwareSelectorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHardwareSelectorWrap *w = new VtkHardwareSelectorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHardwareSelectorWrap::Select(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	vtkSelection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->Select();
	VtkSelectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSelectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSelectionWrap *w = new VtkSelectionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHardwareSelectorWrap::SetArea(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsUint32Array())
	{
		v8::Local<v8::Uint32Array>a0(v8::Local<v8::Uint32Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetArea(
			(unsigned int *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		unsigned int b0[4];
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 4; i++ )
		{
			if( !a0->Get(i)->IsUint32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Uint32Value();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetArea(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsUint32())
	{
		if(info.Length() > 1 && info[1]->IsUint32())
		{
			if(info.Length() > 2 && info[2]->IsUint32())
			{
				if(info.Length() > 3 && info[3]->IsUint32())
				{
										if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->SetArea(
						info[0]->Uint32Value(),
						info[1]->Uint32Value(),
						info[2]->Uint32Value(),
						info[3]->Uint32Value()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHardwareSelectorWrap::SetFieldAssociation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFieldAssociation(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHardwareSelectorWrap::SetProcessID(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetProcessID(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHardwareSelectorWrap::SetPropColorValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat32Array())
	{
		v8::Local<v8::Float32Array>a0(v8::Local<v8::Float32Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPropColorValue(
			(float *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		float b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPropColorValue(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
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
				native->SetPropColorValue(
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

void VtkHardwareSelectorWrap::SetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRenderer(
			(vtkRenderer *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHardwareSelectorWrap::SetUseProcessIdFromData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHardwareSelectorWrap *wrapper = ObjectWrap::Unwrap<VtkHardwareSelectorWrap>(info.Holder());
	vtkHardwareSelector *native = (vtkHardwareSelector *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseProcessIdFromData(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
