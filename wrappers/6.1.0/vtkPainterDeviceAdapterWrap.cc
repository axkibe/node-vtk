/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkPainterDeviceAdapterWrap.h"
#include "vtkDataArrayWrap.h"
#include "vtkRendererWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPainterDeviceAdapterWrap::ptpl;

VtkPainterDeviceAdapterWrap::VtkPainterDeviceAdapterWrap()
{ }

VtkPainterDeviceAdapterWrap::VtkPainterDeviceAdapterWrap(vtkSmartPointer<vtkPainterDeviceAdapter> _native)
{ native = _native; }

VtkPainterDeviceAdapterWrap::~VtkPainterDeviceAdapterWrap()
{ }

void VtkPainterDeviceAdapterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPainterDeviceAdapter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PainterDeviceAdapter").ToLocalChecked(), ConstructorGetter);
}

void VtkPainterDeviceAdapterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPainterDeviceAdapterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPainterDeviceAdapterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BeginPrimitive", BeginPrimitive);
	Nan::SetPrototypeMethod(tpl, "beginPrimitive", BeginPrimitive);

	Nan::SetPrototypeMethod(tpl, "Compatible", Compatible);
	Nan::SetPrototypeMethod(tpl, "compatible", Compatible);

	Nan::SetPrototypeMethod(tpl, "DisableAttributeArray", DisableAttributeArray);
	Nan::SetPrototypeMethod(tpl, "disableAttributeArray", DisableAttributeArray);

	Nan::SetPrototypeMethod(tpl, "EnableAttributeArray", EnableAttributeArray);
	Nan::SetPrototypeMethod(tpl, "enableAttributeArray", EnableAttributeArray);

	Nan::SetPrototypeMethod(tpl, "EndPrimitive", EndPrimitive);
	Nan::SetPrototypeMethod(tpl, "endPrimitive", EndPrimitive);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsAttributesSupported", IsAttributesSupported);
	Nan::SetPrototypeMethod(tpl, "isAttributesSupported", IsAttributesSupported);

	Nan::SetPrototypeMethod(tpl, "MakeBlending", MakeBlending);
	Nan::SetPrototypeMethod(tpl, "makeBlending", MakeBlending);

	Nan::SetPrototypeMethod(tpl, "MakeLighting", MakeLighting);
	Nan::SetPrototypeMethod(tpl, "makeLighting", MakeLighting);

	Nan::SetPrototypeMethod(tpl, "MakeMultisampling", MakeMultisampling);
	Nan::SetPrototypeMethod(tpl, "makeMultisampling", MakeMultisampling);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "QueryBlending", QueryBlending);
	Nan::SetPrototypeMethod(tpl, "queryBlending", QueryBlending);

	Nan::SetPrototypeMethod(tpl, "QueryLighting", QueryLighting);
	Nan::SetPrototypeMethod(tpl, "queryLighting", QueryLighting);

	Nan::SetPrototypeMethod(tpl, "QueryMultisampling", QueryMultisampling);
	Nan::SetPrototypeMethod(tpl, "queryMultisampling", QueryMultisampling);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAttributePointer", SetAttributePointer);
	Nan::SetPrototypeMethod(tpl, "setAttributePointer", SetAttributePointer);

	Nan::SetPrototypeMethod(tpl, "Stencil", Stencil);
	Nan::SetPrototypeMethod(tpl, "stencil", Stencil);

	ptpl.Reset( tpl );
}

void VtkPainterDeviceAdapterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPainterDeviceAdapter> native = vtkSmartPointer<vtkPainterDeviceAdapter>::New();
		VtkPainterDeviceAdapterWrap* obj = new VtkPainterDeviceAdapterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPainterDeviceAdapterWrap::BeginPrimitive(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterDeviceAdapterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterDeviceAdapterWrap>(info.Holder());
	vtkPainterDeviceAdapter *native = (vtkPainterDeviceAdapter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->BeginPrimitive(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPainterDeviceAdapterWrap::Compatible(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterDeviceAdapterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterDeviceAdapterWrap>(info.Holder());
	vtkPainterDeviceAdapter *native = (vtkPainterDeviceAdapter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Compatible(
			(vtkRenderer *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPainterDeviceAdapterWrap::DisableAttributeArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterDeviceAdapterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterDeviceAdapterWrap>(info.Holder());
	vtkPainterDeviceAdapter *native = (vtkPainterDeviceAdapter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DisableAttributeArray(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPainterDeviceAdapterWrap::EnableAttributeArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterDeviceAdapterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterDeviceAdapterWrap>(info.Holder());
	vtkPainterDeviceAdapter *native = (vtkPainterDeviceAdapter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->EnableAttributeArray(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPainterDeviceAdapterWrap::EndPrimitive(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterDeviceAdapterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterDeviceAdapterWrap>(info.Holder());
	vtkPainterDeviceAdapter *native = (vtkPainterDeviceAdapter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EndPrimitive();
}

void VtkPainterDeviceAdapterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterDeviceAdapterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterDeviceAdapterWrap>(info.Holder());
	vtkPainterDeviceAdapter *native = (vtkPainterDeviceAdapter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPainterDeviceAdapterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterDeviceAdapterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterDeviceAdapterWrap>(info.Holder());
	vtkPainterDeviceAdapter *native = (vtkPainterDeviceAdapter *)wrapper->native.GetPointer();
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

void VtkPainterDeviceAdapterWrap::IsAttributesSupported(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterDeviceAdapterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterDeviceAdapterWrap>(info.Holder());
	vtkPainterDeviceAdapter *native = (vtkPainterDeviceAdapter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsAttributesSupported(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPainterDeviceAdapterWrap::MakeBlending(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterDeviceAdapterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterDeviceAdapterWrap>(info.Holder());
	vtkPainterDeviceAdapter *native = (vtkPainterDeviceAdapter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->MakeBlending(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPainterDeviceAdapterWrap::MakeLighting(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterDeviceAdapterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterDeviceAdapterWrap>(info.Holder());
	vtkPainterDeviceAdapter *native = (vtkPainterDeviceAdapter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->MakeLighting(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPainterDeviceAdapterWrap::MakeMultisampling(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterDeviceAdapterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterDeviceAdapterWrap>(info.Holder());
	vtkPainterDeviceAdapter *native = (vtkPainterDeviceAdapter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->MakeMultisampling(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPainterDeviceAdapterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterDeviceAdapterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterDeviceAdapterWrap>(info.Holder());
	vtkPainterDeviceAdapter *native = (vtkPainterDeviceAdapter *)wrapper->native.GetPointer();
	vtkPainterDeviceAdapter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkPainterDeviceAdapterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPainterDeviceAdapterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPainterDeviceAdapterWrap *w = new VtkPainterDeviceAdapterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPainterDeviceAdapterWrap::QueryBlending(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterDeviceAdapterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterDeviceAdapterWrap>(info.Holder());
	vtkPainterDeviceAdapter *native = (vtkPainterDeviceAdapter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->QueryBlending();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPainterDeviceAdapterWrap::QueryLighting(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterDeviceAdapterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterDeviceAdapterWrap>(info.Holder());
	vtkPainterDeviceAdapter *native = (vtkPainterDeviceAdapter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->QueryLighting();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPainterDeviceAdapterWrap::QueryMultisampling(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterDeviceAdapterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterDeviceAdapterWrap>(info.Holder());
	vtkPainterDeviceAdapter *native = (vtkPainterDeviceAdapter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->QueryMultisampling();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPainterDeviceAdapterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterDeviceAdapterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterDeviceAdapterWrap>(info.Holder());
	vtkPainterDeviceAdapter *native = (vtkPainterDeviceAdapter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPainterDeviceAdapter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkPainterDeviceAdapterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPainterDeviceAdapterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPainterDeviceAdapterWrap *w = new VtkPainterDeviceAdapterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPainterDeviceAdapterWrap::SetAttributePointer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterDeviceAdapterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterDeviceAdapterWrap>(info.Holder());
	vtkPainterDeviceAdapter *native = (vtkPainterDeviceAdapter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[1]))
		{
			VtkDataArrayWrap *a1 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetAttributePointer(
				info[0]->Int32Value(),
				(vtkDataArray *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPainterDeviceAdapterWrap::Stencil(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterDeviceAdapterWrap *wrapper = ObjectWrap::Unwrap<VtkPainterDeviceAdapterWrap>(info.Holder());
	vtkPainterDeviceAdapter *native = (vtkPainterDeviceAdapter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Stencil(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

