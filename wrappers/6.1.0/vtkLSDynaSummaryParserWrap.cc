/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkXMLParserWrap.h"
#include "vtkLSDynaSummaryParserWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkLSDynaSummaryParserWrap::ptpl;

VtkLSDynaSummaryParserWrap::VtkLSDynaSummaryParserWrap()
{ }

VtkLSDynaSummaryParserWrap::VtkLSDynaSummaryParserWrap(vtkSmartPointer<vtkLSDynaSummaryParser> _native)
{ native = _native; }

VtkLSDynaSummaryParserWrap::~VtkLSDynaSummaryParserWrap()
{ }

void VtkLSDynaSummaryParserWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkLSDynaSummaryParser").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("LSDynaSummaryParser").ToLocalChecked(), ConstructorGetter);
}

void VtkLSDynaSummaryParserWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkLSDynaSummaryParserWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkXMLParserWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkXMLParserWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkLSDynaSummaryParserWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkLSDynaSummaryParserWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkLSDynaSummaryParser> native = vtkSmartPointer<vtkLSDynaSummaryParser>::New();
		VtkLSDynaSummaryParserWrap* obj = new VtkLSDynaSummaryParserWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkLSDynaSummaryParserWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLSDynaSummaryParserWrap *wrapper = ObjectWrap::Unwrap<VtkLSDynaSummaryParserWrap>(info.Holder());
	vtkLSDynaSummaryParser *native = (vtkLSDynaSummaryParser *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkLSDynaSummaryParserWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLSDynaSummaryParserWrap *wrapper = ObjectWrap::Unwrap<VtkLSDynaSummaryParserWrap>(info.Holder());
	vtkLSDynaSummaryParser *native = (vtkLSDynaSummaryParser *)wrapper->native.GetPointer();
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

void VtkLSDynaSummaryParserWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLSDynaSummaryParserWrap *wrapper = ObjectWrap::Unwrap<VtkLSDynaSummaryParserWrap>(info.Holder());
	vtkLSDynaSummaryParser *native = (vtkLSDynaSummaryParser *)wrapper->native.GetPointer();
	vtkLSDynaSummaryParser * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkLSDynaSummaryParserWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkLSDynaSummaryParserWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLSDynaSummaryParserWrap *w = new VtkLSDynaSummaryParserWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLSDynaSummaryParserWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLSDynaSummaryParserWrap *wrapper = ObjectWrap::Unwrap<VtkLSDynaSummaryParserWrap>(info.Holder());
	vtkLSDynaSummaryParser *native = (vtkLSDynaSummaryParser *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkLSDynaSummaryParser * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkLSDynaSummaryParserWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkLSDynaSummaryParserWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkLSDynaSummaryParserWrap *w = new VtkLSDynaSummaryParserWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

