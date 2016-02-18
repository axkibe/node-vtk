/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkImageWriterWrap.h"
#include "vtkTIFFWriterWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTIFFWriterWrap::ptpl;

VtkTIFFWriterWrap::VtkTIFFWriterWrap()
{ }

VtkTIFFWriterWrap::VtkTIFFWriterWrap(vtkSmartPointer<vtkTIFFWriter> _native)
{ native = _native; }

VtkTIFFWriterWrap::~VtkTIFFWriterWrap()
{ }

void VtkTIFFWriterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTIFFWriter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TIFFWriter").ToLocalChecked(), ConstructorGetter);
}

void VtkTIFFWriterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTIFFWriterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageWriterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageWriterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTIFFWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCompression", GetCompression);
	Nan::SetPrototypeMethod(tpl, "getCompression", GetCompression);

	Nan::SetPrototypeMethod(tpl, "GetCompressionMaxValue", GetCompressionMaxValue);
	Nan::SetPrototypeMethod(tpl, "getCompressionMaxValue", GetCompressionMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetCompressionMinValue", GetCompressionMinValue);
	Nan::SetPrototypeMethod(tpl, "getCompressionMinValue", GetCompressionMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCompression", SetCompression);
	Nan::SetPrototypeMethod(tpl, "setCompression", SetCompression);

	Nan::SetPrototypeMethod(tpl, "SetCompressionToDeflate", SetCompressionToDeflate);
	Nan::SetPrototypeMethod(tpl, "setCompressionToDeflate", SetCompressionToDeflate);

	Nan::SetPrototypeMethod(tpl, "SetCompressionToJPEG", SetCompressionToJPEG);
	Nan::SetPrototypeMethod(tpl, "setCompressionToJPEG", SetCompressionToJPEG);

	Nan::SetPrototypeMethod(tpl, "SetCompressionToLZW", SetCompressionToLZW);
	Nan::SetPrototypeMethod(tpl, "setCompressionToLZW", SetCompressionToLZW);

	Nan::SetPrototypeMethod(tpl, "SetCompressionToNoCompression", SetCompressionToNoCompression);
	Nan::SetPrototypeMethod(tpl, "setCompressionToNoCompression", SetCompressionToNoCompression);

	Nan::SetPrototypeMethod(tpl, "SetCompressionToPackBits", SetCompressionToPackBits);
	Nan::SetPrototypeMethod(tpl, "setCompressionToPackBits", SetCompressionToPackBits);

#ifdef VTK_NODE_PLUS_VTKTIFFWRITERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKTIFFWRITERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkTIFFWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTIFFWriter> native = vtkSmartPointer<vtkTIFFWriter>::New();
		VtkTIFFWriterWrap* obj = new VtkTIFFWriterWrap(native);
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

void VtkTIFFWriterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTIFFWriterWrap *wrapper = ObjectWrap::Unwrap<VtkTIFFWriterWrap>(info.Holder());
	vtkTIFFWriter *native = (vtkTIFFWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTIFFWriterWrap::GetCompression(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTIFFWriterWrap *wrapper = ObjectWrap::Unwrap<VtkTIFFWriterWrap>(info.Holder());
	vtkTIFFWriter *native = (vtkTIFFWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCompression();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTIFFWriterWrap::GetCompressionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTIFFWriterWrap *wrapper = ObjectWrap::Unwrap<VtkTIFFWriterWrap>(info.Holder());
	vtkTIFFWriter *native = (vtkTIFFWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCompressionMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTIFFWriterWrap::GetCompressionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTIFFWriterWrap *wrapper = ObjectWrap::Unwrap<VtkTIFFWriterWrap>(info.Holder());
	vtkTIFFWriter *native = (vtkTIFFWriter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCompressionMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTIFFWriterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTIFFWriterWrap *wrapper = ObjectWrap::Unwrap<VtkTIFFWriterWrap>(info.Holder());
	vtkTIFFWriter *native = (vtkTIFFWriter *)wrapper->native.GetPointer();
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

void VtkTIFFWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTIFFWriterWrap *wrapper = ObjectWrap::Unwrap<VtkTIFFWriterWrap>(info.Holder());
	vtkTIFFWriter *native = (vtkTIFFWriter *)wrapper->native.GetPointer();
	vtkTIFFWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkTIFFWriterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTIFFWriterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTIFFWriterWrap *w = new VtkTIFFWriterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTIFFWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTIFFWriterWrap *wrapper = ObjectWrap::Unwrap<VtkTIFFWriterWrap>(info.Holder());
	vtkTIFFWriter *native = (vtkTIFFWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTIFFWriter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkTIFFWriterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTIFFWriterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTIFFWriterWrap *w = new VtkTIFFWriterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTIFFWriterWrap::SetCompression(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTIFFWriterWrap *wrapper = ObjectWrap::Unwrap<VtkTIFFWriterWrap>(info.Holder());
	vtkTIFFWriter *native = (vtkTIFFWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCompression(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTIFFWriterWrap::SetCompressionToDeflate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTIFFWriterWrap *wrapper = ObjectWrap::Unwrap<VtkTIFFWriterWrap>(info.Holder());
	vtkTIFFWriter *native = (vtkTIFFWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetCompressionToDeflate();
}

void VtkTIFFWriterWrap::SetCompressionToJPEG(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTIFFWriterWrap *wrapper = ObjectWrap::Unwrap<VtkTIFFWriterWrap>(info.Holder());
	vtkTIFFWriter *native = (vtkTIFFWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetCompressionToJPEG();
}

void VtkTIFFWriterWrap::SetCompressionToLZW(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTIFFWriterWrap *wrapper = ObjectWrap::Unwrap<VtkTIFFWriterWrap>(info.Holder());
	vtkTIFFWriter *native = (vtkTIFFWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetCompressionToLZW();
}

void VtkTIFFWriterWrap::SetCompressionToNoCompression(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTIFFWriterWrap *wrapper = ObjectWrap::Unwrap<VtkTIFFWriterWrap>(info.Holder());
	vtkTIFFWriter *native = (vtkTIFFWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetCompressionToNoCompression();
}

void VtkTIFFWriterWrap::SetCompressionToPackBits(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTIFFWriterWrap *wrapper = ObjectWrap::Unwrap<VtkTIFFWriterWrap>(info.Holder());
	vtkTIFFWriter *native = (vtkTIFFWriter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetCompressionToPackBits();
}

