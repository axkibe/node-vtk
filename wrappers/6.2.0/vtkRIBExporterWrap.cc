/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkExporterWrap.h"
#include "vtkRIBExporterWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkRIBExporterWrap::ptpl;

VtkRIBExporterWrap::VtkRIBExporterWrap()
{ }

VtkRIBExporterWrap::VtkRIBExporterWrap(vtkSmartPointer<vtkRIBExporter> _native)
{ native = _native; }

VtkRIBExporterWrap::~VtkRIBExporterWrap()
{ }

void VtkRIBExporterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkRIBExporter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("RIBExporter").ToLocalChecked(), ConstructorGetter);
}

void VtkRIBExporterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkRIBExporterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkExporterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkExporterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkRIBExporterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BackgroundOff", BackgroundOff);
	Nan::SetPrototypeMethod(tpl, "backgroundOff", BackgroundOff);

	Nan::SetPrototypeMethod(tpl, "BackgroundOn", BackgroundOn);
	Nan::SetPrototypeMethod(tpl, "backgroundOn", BackgroundOn);

	Nan::SetPrototypeMethod(tpl, "ExportArraysOff", ExportArraysOff);
	Nan::SetPrototypeMethod(tpl, "exportArraysOff", ExportArraysOff);

	Nan::SetPrototypeMethod(tpl, "ExportArraysOn", ExportArraysOn);
	Nan::SetPrototypeMethod(tpl, "exportArraysOn", ExportArraysOn);

	Nan::SetPrototypeMethod(tpl, "GetBackground", GetBackground);
	Nan::SetPrototypeMethod(tpl, "getBackground", GetBackground);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetExportArrays", GetExportArrays);
	Nan::SetPrototypeMethod(tpl, "getExportArrays", GetExportArrays);

	Nan::SetPrototypeMethod(tpl, "GetExportArraysMaxValue", GetExportArraysMaxValue);
	Nan::SetPrototypeMethod(tpl, "getExportArraysMaxValue", GetExportArraysMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetExportArraysMinValue", GetExportArraysMinValue);
	Nan::SetPrototypeMethod(tpl, "getExportArraysMinValue", GetExportArraysMinValue);

	Nan::SetPrototypeMethod(tpl, "GetFilePrefix", GetFilePrefix);
	Nan::SetPrototypeMethod(tpl, "getFilePrefix", GetFilePrefix);

	Nan::SetPrototypeMethod(tpl, "GetPixelSamples", GetPixelSamples);
	Nan::SetPrototypeMethod(tpl, "getPixelSamples", GetPixelSamples);

	Nan::SetPrototypeMethod(tpl, "GetSize", GetSize);
	Nan::SetPrototypeMethod(tpl, "getSize", GetSize);

	Nan::SetPrototypeMethod(tpl, "GetTexturePrefix", GetTexturePrefix);
	Nan::SetPrototypeMethod(tpl, "getTexturePrefix", GetTexturePrefix);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBackground", SetBackground);
	Nan::SetPrototypeMethod(tpl, "setBackground", SetBackground);

	Nan::SetPrototypeMethod(tpl, "SetExportArrays", SetExportArrays);
	Nan::SetPrototypeMethod(tpl, "setExportArrays", SetExportArrays);

	Nan::SetPrototypeMethod(tpl, "SetFilePrefix", SetFilePrefix);
	Nan::SetPrototypeMethod(tpl, "setFilePrefix", SetFilePrefix);

	Nan::SetPrototypeMethod(tpl, "SetPixelSamples", SetPixelSamples);
	Nan::SetPrototypeMethod(tpl, "setPixelSamples", SetPixelSamples);

	Nan::SetPrototypeMethod(tpl, "SetSize", SetSize);
	Nan::SetPrototypeMethod(tpl, "setSize", SetSize);

	Nan::SetPrototypeMethod(tpl, "SetTexturePrefix", SetTexturePrefix);
	Nan::SetPrototypeMethod(tpl, "setTexturePrefix", SetTexturePrefix);

#ifdef VTK_NODE_PLUS_VTKRIBEXPORTERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKRIBEXPORTERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkRIBExporterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkRIBExporter> native = vtkSmartPointer<vtkRIBExporter>::New();
		VtkRIBExporterWrap* obj = new VtkRIBExporterWrap(native);
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

void VtkRIBExporterWrap::BackgroundOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRIBExporterWrap *wrapper = ObjectWrap::Unwrap<VtkRIBExporterWrap>(info.Holder());
	vtkRIBExporter *native = (vtkRIBExporter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BackgroundOff();
}

void VtkRIBExporterWrap::BackgroundOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRIBExporterWrap *wrapper = ObjectWrap::Unwrap<VtkRIBExporterWrap>(info.Holder());
	vtkRIBExporter *native = (vtkRIBExporter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BackgroundOn();
}

void VtkRIBExporterWrap::ExportArraysOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRIBExporterWrap *wrapper = ObjectWrap::Unwrap<VtkRIBExporterWrap>(info.Holder());
	vtkRIBExporter *native = (vtkRIBExporter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ExportArraysOff();
}

void VtkRIBExporterWrap::ExportArraysOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRIBExporterWrap *wrapper = ObjectWrap::Unwrap<VtkRIBExporterWrap>(info.Holder());
	vtkRIBExporter *native = (vtkRIBExporter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ExportArraysOn();
}

void VtkRIBExporterWrap::GetBackground(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRIBExporterWrap *wrapper = ObjectWrap::Unwrap<VtkRIBExporterWrap>(info.Holder());
	vtkRIBExporter *native = (vtkRIBExporter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBackground();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRIBExporterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRIBExporterWrap *wrapper = ObjectWrap::Unwrap<VtkRIBExporterWrap>(info.Holder());
	vtkRIBExporter *native = (vtkRIBExporter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRIBExporterWrap::GetExportArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRIBExporterWrap *wrapper = ObjectWrap::Unwrap<VtkRIBExporterWrap>(info.Holder());
	vtkRIBExporter *native = (vtkRIBExporter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExportArrays();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRIBExporterWrap::GetExportArraysMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRIBExporterWrap *wrapper = ObjectWrap::Unwrap<VtkRIBExporterWrap>(info.Holder());
	vtkRIBExporter *native = (vtkRIBExporter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExportArraysMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRIBExporterWrap::GetExportArraysMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRIBExporterWrap *wrapper = ObjectWrap::Unwrap<VtkRIBExporterWrap>(info.Holder());
	vtkRIBExporter *native = (vtkRIBExporter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExportArraysMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRIBExporterWrap::GetFilePrefix(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRIBExporterWrap *wrapper = ObjectWrap::Unwrap<VtkRIBExporterWrap>(info.Holder());
	vtkRIBExporter *native = (vtkRIBExporter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFilePrefix();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRIBExporterWrap::GetPixelSamples(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRIBExporterWrap *wrapper = ObjectWrap::Unwrap<VtkRIBExporterWrap>(info.Holder());
	vtkRIBExporter *native = (vtkRIBExporter *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPixelSamples();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkRIBExporterWrap::GetSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRIBExporterWrap *wrapper = ObjectWrap::Unwrap<VtkRIBExporterWrap>(info.Holder());
	vtkRIBExporter *native = (vtkRIBExporter *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSize();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkRIBExporterWrap::GetTexturePrefix(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRIBExporterWrap *wrapper = ObjectWrap::Unwrap<VtkRIBExporterWrap>(info.Holder());
	vtkRIBExporter *native = (vtkRIBExporter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTexturePrefix();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRIBExporterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRIBExporterWrap *wrapper = ObjectWrap::Unwrap<VtkRIBExporterWrap>(info.Holder());
	vtkRIBExporter *native = (vtkRIBExporter *)wrapper->native.GetPointer();
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

void VtkRIBExporterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRIBExporterWrap *wrapper = ObjectWrap::Unwrap<VtkRIBExporterWrap>(info.Holder());
	vtkRIBExporter *native = (vtkRIBExporter *)wrapper->native.GetPointer();
	vtkRIBExporter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkRIBExporterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRIBExporterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRIBExporterWrap *w = new VtkRIBExporterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRIBExporterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRIBExporterWrap *wrapper = ObjectWrap::Unwrap<VtkRIBExporterWrap>(info.Holder());
	vtkRIBExporter *native = (vtkRIBExporter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkRIBExporter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkRIBExporterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkRIBExporterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkRIBExporterWrap *w = new VtkRIBExporterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRIBExporterWrap::SetBackground(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRIBExporterWrap *wrapper = ObjectWrap::Unwrap<VtkRIBExporterWrap>(info.Holder());
	vtkRIBExporter *native = (vtkRIBExporter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBackground(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRIBExporterWrap::SetExportArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRIBExporterWrap *wrapper = ObjectWrap::Unwrap<VtkRIBExporterWrap>(info.Holder());
	vtkRIBExporter *native = (vtkRIBExporter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetExportArrays(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRIBExporterWrap::SetFilePrefix(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRIBExporterWrap *wrapper = ObjectWrap::Unwrap<VtkRIBExporterWrap>(info.Holder());
	vtkRIBExporter *native = (vtkRIBExporter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFilePrefix(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRIBExporterWrap::SetPixelSamples(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRIBExporterWrap *wrapper = ObjectWrap::Unwrap<VtkRIBExporterWrap>(info.Holder());
	vtkRIBExporter *native = (vtkRIBExporter *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32Array())
	{
		v8::Local<v8::Int32Array>a0(v8::Local<v8::Int32Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPixelSamples(
			(int *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		int b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
		{
			if( !a0->Get(i)->IsInt32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Int32Value();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPixelSamples(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetPixelSamples(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRIBExporterWrap::SetSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRIBExporterWrap *wrapper = ObjectWrap::Unwrap<VtkRIBExporterWrap>(info.Holder());
	vtkRIBExporter *native = (vtkRIBExporter *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32Array())
	{
		v8::Local<v8::Int32Array>a0(v8::Local<v8::Int32Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSize(
			(int *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		int b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
		{
			if( !a0->Get(i)->IsInt32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Int32Value();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSize(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetSize(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRIBExporterWrap::SetTexturePrefix(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRIBExporterWrap *wrapper = ObjectWrap::Unwrap<VtkRIBExporterWrap>(info.Holder());
	vtkRIBExporter *native = (vtkRIBExporter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTexturePrefix(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

