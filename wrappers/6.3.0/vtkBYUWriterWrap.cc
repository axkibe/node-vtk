/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkWriterWrap.h"
#include "vtkBYUWriterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPolyDataWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkBYUWriterWrap::ptpl;

VtkBYUWriterWrap::VtkBYUWriterWrap()
{ }

VtkBYUWriterWrap::VtkBYUWriterWrap(vtkSmartPointer<vtkBYUWriter> _native)
{ native = _native; }

VtkBYUWriterWrap::~VtkBYUWriterWrap()
{ }

void VtkBYUWriterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkBYUWriter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("BYUWriter").ToLocalChecked(), ConstructorGetter);
}

void VtkBYUWriterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkBYUWriterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkWriterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkWriterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkBYUWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDisplacementFileName", GetDisplacementFileName);
	Nan::SetPrototypeMethod(tpl, "getDisplacementFileName", GetDisplacementFileName);

	Nan::SetPrototypeMethod(tpl, "GetGeometryFileName", GetGeometryFileName);
	Nan::SetPrototypeMethod(tpl, "getGeometryFileName", GetGeometryFileName);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "GetScalarFileName", GetScalarFileName);
	Nan::SetPrototypeMethod(tpl, "getScalarFileName", GetScalarFileName);

	Nan::SetPrototypeMethod(tpl, "GetTextureFileName", GetTextureFileName);
	Nan::SetPrototypeMethod(tpl, "getTextureFileName", GetTextureFileName);

	Nan::SetPrototypeMethod(tpl, "GetWriteDisplacement", GetWriteDisplacement);
	Nan::SetPrototypeMethod(tpl, "getWriteDisplacement", GetWriteDisplacement);

	Nan::SetPrototypeMethod(tpl, "GetWriteScalar", GetWriteScalar);
	Nan::SetPrototypeMethod(tpl, "getWriteScalar", GetWriteScalar);

	Nan::SetPrototypeMethod(tpl, "GetWriteTexture", GetWriteTexture);
	Nan::SetPrototypeMethod(tpl, "getWriteTexture", GetWriteTexture);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDisplacementFileName", SetDisplacementFileName);
	Nan::SetPrototypeMethod(tpl, "setDisplacementFileName", SetDisplacementFileName);

	Nan::SetPrototypeMethod(tpl, "SetGeometryFileName", SetGeometryFileName);
	Nan::SetPrototypeMethod(tpl, "setGeometryFileName", SetGeometryFileName);

	Nan::SetPrototypeMethod(tpl, "SetScalarFileName", SetScalarFileName);
	Nan::SetPrototypeMethod(tpl, "setScalarFileName", SetScalarFileName);

	Nan::SetPrototypeMethod(tpl, "SetTextureFileName", SetTextureFileName);
	Nan::SetPrototypeMethod(tpl, "setTextureFileName", SetTextureFileName);

	Nan::SetPrototypeMethod(tpl, "SetWriteDisplacement", SetWriteDisplacement);
	Nan::SetPrototypeMethod(tpl, "setWriteDisplacement", SetWriteDisplacement);

	Nan::SetPrototypeMethod(tpl, "SetWriteScalar", SetWriteScalar);
	Nan::SetPrototypeMethod(tpl, "setWriteScalar", SetWriteScalar);

	Nan::SetPrototypeMethod(tpl, "SetWriteTexture", SetWriteTexture);
	Nan::SetPrototypeMethod(tpl, "setWriteTexture", SetWriteTexture);

	Nan::SetPrototypeMethod(tpl, "WriteDisplacementOff", WriteDisplacementOff);
	Nan::SetPrototypeMethod(tpl, "writeDisplacementOff", WriteDisplacementOff);

	Nan::SetPrototypeMethod(tpl, "WriteDisplacementOn", WriteDisplacementOn);
	Nan::SetPrototypeMethod(tpl, "writeDisplacementOn", WriteDisplacementOn);

	Nan::SetPrototypeMethod(tpl, "WriteScalarOff", WriteScalarOff);
	Nan::SetPrototypeMethod(tpl, "writeScalarOff", WriteScalarOff);

	Nan::SetPrototypeMethod(tpl, "WriteScalarOn", WriteScalarOn);
	Nan::SetPrototypeMethod(tpl, "writeScalarOn", WriteScalarOn);

	Nan::SetPrototypeMethod(tpl, "WriteTextureOff", WriteTextureOff);
	Nan::SetPrototypeMethod(tpl, "writeTextureOff", WriteTextureOff);

	Nan::SetPrototypeMethod(tpl, "WriteTextureOn", WriteTextureOn);
	Nan::SetPrototypeMethod(tpl, "writeTextureOn", WriteTextureOn);

#ifdef VTK_NODE_PLUS_VTKBYUWRITERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKBYUWRITERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkBYUWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkBYUWriter> native = vtkSmartPointer<vtkBYUWriter>::New();
		VtkBYUWriterWrap* obj = new VtkBYUWriterWrap(native);
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

void VtkBYUWriterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUWriterWrap *wrapper = ObjectWrap::Unwrap<VtkBYUWriterWrap>(info.Holder());
	vtkBYUWriter *native = (vtkBYUWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBYUWriterWrap::GetDisplacementFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUWriterWrap *wrapper = ObjectWrap::Unwrap<VtkBYUWriterWrap>(info.Holder());
	vtkBYUWriter *native = (vtkBYUWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDisplacementFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBYUWriterWrap::GetGeometryFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUWriterWrap *wrapper = ObjectWrap::Unwrap<VtkBYUWriterWrap>(info.Holder());
	vtkBYUWriter *native = (vtkBYUWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGeometryFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBYUWriterWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUWriterWrap *wrapper = ObjectWrap::Unwrap<VtkBYUWriterWrap>(info.Holder());
	vtkBYUWriter *native = (vtkBYUWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkPolyData * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetInput(
			info[0]->Int32Value()
		);
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
		return;
	}
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

void VtkBYUWriterWrap::GetScalarFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUWriterWrap *wrapper = ObjectWrap::Unwrap<VtkBYUWriterWrap>(info.Holder());
	vtkBYUWriter *native = (vtkBYUWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBYUWriterWrap::GetTextureFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUWriterWrap *wrapper = ObjectWrap::Unwrap<VtkBYUWriterWrap>(info.Holder());
	vtkBYUWriter *native = (vtkBYUWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextureFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBYUWriterWrap::GetWriteDisplacement(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUWriterWrap *wrapper = ObjectWrap::Unwrap<VtkBYUWriterWrap>(info.Holder());
	vtkBYUWriter *native = (vtkBYUWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWriteDisplacement();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBYUWriterWrap::GetWriteScalar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUWriterWrap *wrapper = ObjectWrap::Unwrap<VtkBYUWriterWrap>(info.Holder());
	vtkBYUWriter *native = (vtkBYUWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWriteScalar();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBYUWriterWrap::GetWriteTexture(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUWriterWrap *wrapper = ObjectWrap::Unwrap<VtkBYUWriterWrap>(info.Holder());
	vtkBYUWriter *native = (vtkBYUWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWriteTexture();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBYUWriterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUWriterWrap *wrapper = ObjectWrap::Unwrap<VtkBYUWriterWrap>(info.Holder());
	vtkBYUWriter *native = (vtkBYUWriter *)wrapper->native.GetPointer();
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

void VtkBYUWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUWriterWrap *wrapper = ObjectWrap::Unwrap<VtkBYUWriterWrap>(info.Holder());
	vtkBYUWriter *native = (vtkBYUWriter *)wrapper->native.GetPointer();
	vtkBYUWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkBYUWriterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkBYUWriterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBYUWriterWrap *w = new VtkBYUWriterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBYUWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUWriterWrap *wrapper = ObjectWrap::Unwrap<VtkBYUWriterWrap>(info.Holder());
	vtkBYUWriter *native = (vtkBYUWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkBYUWriter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkBYUWriterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkBYUWriterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkBYUWriterWrap *w = new VtkBYUWriterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBYUWriterWrap::SetDisplacementFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUWriterWrap *wrapper = ObjectWrap::Unwrap<VtkBYUWriterWrap>(info.Holder());
	vtkBYUWriter *native = (vtkBYUWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDisplacementFileName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBYUWriterWrap::SetGeometryFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUWriterWrap *wrapper = ObjectWrap::Unwrap<VtkBYUWriterWrap>(info.Holder());
	vtkBYUWriter *native = (vtkBYUWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGeometryFileName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBYUWriterWrap::SetScalarFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUWriterWrap *wrapper = ObjectWrap::Unwrap<VtkBYUWriterWrap>(info.Holder());
	vtkBYUWriter *native = (vtkBYUWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScalarFileName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBYUWriterWrap::SetTextureFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUWriterWrap *wrapper = ObjectWrap::Unwrap<VtkBYUWriterWrap>(info.Holder());
	vtkBYUWriter *native = (vtkBYUWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTextureFileName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBYUWriterWrap::SetWriteDisplacement(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUWriterWrap *wrapper = ObjectWrap::Unwrap<VtkBYUWriterWrap>(info.Holder());
	vtkBYUWriter *native = (vtkBYUWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWriteDisplacement(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBYUWriterWrap::SetWriteScalar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUWriterWrap *wrapper = ObjectWrap::Unwrap<VtkBYUWriterWrap>(info.Holder());
	vtkBYUWriter *native = (vtkBYUWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWriteScalar(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBYUWriterWrap::SetWriteTexture(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUWriterWrap *wrapper = ObjectWrap::Unwrap<VtkBYUWriterWrap>(info.Holder());
	vtkBYUWriter *native = (vtkBYUWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWriteTexture(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBYUWriterWrap::WriteDisplacementOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUWriterWrap *wrapper = ObjectWrap::Unwrap<VtkBYUWriterWrap>(info.Holder());
	vtkBYUWriter *native = (vtkBYUWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WriteDisplacementOff();
}

void VtkBYUWriterWrap::WriteDisplacementOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUWriterWrap *wrapper = ObjectWrap::Unwrap<VtkBYUWriterWrap>(info.Holder());
	vtkBYUWriter *native = (vtkBYUWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WriteDisplacementOn();
}

void VtkBYUWriterWrap::WriteScalarOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUWriterWrap *wrapper = ObjectWrap::Unwrap<VtkBYUWriterWrap>(info.Holder());
	vtkBYUWriter *native = (vtkBYUWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WriteScalarOff();
}

void VtkBYUWriterWrap::WriteScalarOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUWriterWrap *wrapper = ObjectWrap::Unwrap<VtkBYUWriterWrap>(info.Holder());
	vtkBYUWriter *native = (vtkBYUWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WriteScalarOn();
}

void VtkBYUWriterWrap::WriteTextureOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUWriterWrap *wrapper = ObjectWrap::Unwrap<VtkBYUWriterWrap>(info.Holder());
	vtkBYUWriter *native = (vtkBYUWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WriteTextureOff();
}

void VtkBYUWriterWrap::WriteTextureOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBYUWriterWrap *wrapper = ObjectWrap::Unwrap<VtkBYUWriterWrap>(info.Holder());
	vtkBYUWriter *native = (vtkBYUWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WriteTextureOn();
}

