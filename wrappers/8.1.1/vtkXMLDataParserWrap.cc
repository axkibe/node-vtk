/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkXMLParserWrap.h"
#include "vtkXMLDataParserWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkXMLDataElementWrap.h"
#include "vtkDataCompressorWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkXMLDataParserWrap::ptpl;

VtkXMLDataParserWrap::VtkXMLDataParserWrap()
{ }

VtkXMLDataParserWrap::VtkXMLDataParserWrap(vtkSmartPointer<vtkXMLDataParser> _native)
{ native = _native; }

VtkXMLDataParserWrap::~VtkXMLDataParserWrap()
{ }

void VtkXMLDataParserWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkXMLDataParser").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("XMLDataParser").ToLocalChecked(), ConstructorGetter);
}

void VtkXMLDataParserWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkXMLDataParserWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkXMLParserWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkXMLParserWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkXMLDataParserWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CharacterDataHandler", CharacterDataHandler);
	Nan::SetPrototypeMethod(tpl, "characterDataHandler", CharacterDataHandler);

	Nan::SetPrototypeMethod(tpl, "GetAbort", GetAbort);
	Nan::SetPrototypeMethod(tpl, "getAbort", GetAbort);

	Nan::SetPrototypeMethod(tpl, "GetAttributesEncoding", GetAttributesEncoding);
	Nan::SetPrototypeMethod(tpl, "getAttributesEncoding", GetAttributesEncoding);

	Nan::SetPrototypeMethod(tpl, "GetAttributesEncodingMaxValue", GetAttributesEncodingMaxValue);
	Nan::SetPrototypeMethod(tpl, "getAttributesEncodingMaxValue", GetAttributesEncodingMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetAttributesEncodingMinValue", GetAttributesEncodingMinValue);
	Nan::SetPrototypeMethod(tpl, "getAttributesEncodingMinValue", GetAttributesEncodingMinValue);

	Nan::SetPrototypeMethod(tpl, "GetCompressor", GetCompressor);
	Nan::SetPrototypeMethod(tpl, "getCompressor", GetCompressor);

	Nan::SetPrototypeMethod(tpl, "GetProgress", GetProgress);
	Nan::SetPrototypeMethod(tpl, "getProgress", GetProgress);

	Nan::SetPrototypeMethod(tpl, "GetRootElement", GetRootElement);
	Nan::SetPrototypeMethod(tpl, "getRootElement", GetRootElement);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Parse", Parse);
	Nan::SetPrototypeMethod(tpl, "parse", Parse);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAbort", SetAbort);
	Nan::SetPrototypeMethod(tpl, "setAbort", SetAbort);

	Nan::SetPrototypeMethod(tpl, "SetAttributesEncoding", SetAttributesEncoding);
	Nan::SetPrototypeMethod(tpl, "setAttributesEncoding", SetAttributesEncoding);

	Nan::SetPrototypeMethod(tpl, "SetCompressor", SetCompressor);
	Nan::SetPrototypeMethod(tpl, "setCompressor", SetCompressor);

	Nan::SetPrototypeMethod(tpl, "SetProgress", SetProgress);
	Nan::SetPrototypeMethod(tpl, "setProgress", SetProgress);

#ifdef VTK_NODE_PLUS_VTKXMLDATAPARSERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKXMLDATAPARSERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkXMLDataParserWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkXMLDataParser> native = vtkSmartPointer<vtkXMLDataParser>::New();
		VtkXMLDataParserWrap* obj = new VtkXMLDataParserWrap(native);
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

void VtkXMLDataParserWrap::CharacterDataHandler(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLDataParserWrap *wrapper = ObjectWrap::Unwrap<VtkXMLDataParserWrap>(info.Holder());
	vtkXMLDataParser *native = (vtkXMLDataParser *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->CharacterDataHandler(
				*a0,
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLDataParserWrap::GetAbort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLDataParserWrap *wrapper = ObjectWrap::Unwrap<VtkXMLDataParserWrap>(info.Holder());
	vtkXMLDataParser *native = (vtkXMLDataParser *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAbort();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkXMLDataParserWrap::GetAttributesEncoding(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLDataParserWrap *wrapper = ObjectWrap::Unwrap<VtkXMLDataParserWrap>(info.Holder());
	vtkXMLDataParser *native = (vtkXMLDataParser *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAttributesEncoding();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkXMLDataParserWrap::GetAttributesEncodingMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLDataParserWrap *wrapper = ObjectWrap::Unwrap<VtkXMLDataParserWrap>(info.Holder());
	vtkXMLDataParser *native = (vtkXMLDataParser *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAttributesEncodingMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkXMLDataParserWrap::GetAttributesEncodingMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLDataParserWrap *wrapper = ObjectWrap::Unwrap<VtkXMLDataParserWrap>(info.Holder());
	vtkXMLDataParser *native = (vtkXMLDataParser *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAttributesEncodingMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkXMLDataParserWrap::GetCompressor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLDataParserWrap *wrapper = ObjectWrap::Unwrap<VtkXMLDataParserWrap>(info.Holder());
	vtkXMLDataParser *native = (vtkXMLDataParser *)wrapper->native.GetPointer();
	vtkDataCompressor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCompressor();
	VtkDataCompressorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataCompressorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataCompressorWrap *w = new VtkDataCompressorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLDataParserWrap::GetProgress(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLDataParserWrap *wrapper = ObjectWrap::Unwrap<VtkXMLDataParserWrap>(info.Holder());
	vtkXMLDataParser *native = (vtkXMLDataParser *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProgress();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkXMLDataParserWrap::GetRootElement(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLDataParserWrap *wrapper = ObjectWrap::Unwrap<VtkXMLDataParserWrap>(info.Holder());
	vtkXMLDataParser *native = (vtkXMLDataParser *)wrapper->native.GetPointer();
	vtkXMLDataElement * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRootElement();
	VtkXMLDataElementWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkXMLDataElementWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkXMLDataElementWrap *w = new VtkXMLDataElementWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLDataParserWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLDataParserWrap *wrapper = ObjectWrap::Unwrap<VtkXMLDataParserWrap>(info.Holder());
	vtkXMLDataParser *native = (vtkXMLDataParser *)wrapper->native.GetPointer();
	vtkXMLDataParser * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkXMLDataParserWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkXMLDataParserWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkXMLDataParserWrap *w = new VtkXMLDataParserWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLDataParserWrap::Parse(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLDataParserWrap *wrapper = ObjectWrap::Unwrap<VtkXMLDataParserWrap>(info.Holder());
	vtkXMLDataParser *native = (vtkXMLDataParser *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->Parse();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkXMLDataParserWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLDataParserWrap *wrapper = ObjectWrap::Unwrap<VtkXMLDataParserWrap>(info.Holder());
	vtkXMLDataParser *native = (vtkXMLDataParser *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkXMLDataParser * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkXMLDataParserWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkXMLDataParserWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkXMLDataParserWrap *w = new VtkXMLDataParserWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLDataParserWrap::SetAbort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLDataParserWrap *wrapper = ObjectWrap::Unwrap<VtkXMLDataParserWrap>(info.Holder());
	vtkXMLDataParser *native = (vtkXMLDataParser *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAbort(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLDataParserWrap::SetAttributesEncoding(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLDataParserWrap *wrapper = ObjectWrap::Unwrap<VtkXMLDataParserWrap>(info.Holder());
	vtkXMLDataParser *native = (vtkXMLDataParser *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAttributesEncoding(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLDataParserWrap::SetCompressor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLDataParserWrap *wrapper = ObjectWrap::Unwrap<VtkXMLDataParserWrap>(info.Holder());
	vtkXMLDataParser *native = (vtkXMLDataParser *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataCompressorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataCompressorWrap *a0 = ObjectWrap::Unwrap<VtkDataCompressorWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCompressor(
			(vtkDataCompressor *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLDataParserWrap::SetProgress(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLDataParserWrap *wrapper = ObjectWrap::Unwrap<VtkXMLDataParserWrap>(info.Holder());
	vtkXMLDataParser *native = (vtkXMLDataParser *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetProgress(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

