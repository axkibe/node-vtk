/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkThreadedImageAlgorithmWrap.h"
#include "vtkImageCheckerboardWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkDataObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageCheckerboardWrap::ptpl;

VtkImageCheckerboardWrap::VtkImageCheckerboardWrap()
{ }

VtkImageCheckerboardWrap::VtkImageCheckerboardWrap(vtkSmartPointer<vtkImageCheckerboard> _native)
{ native = _native; }

VtkImageCheckerboardWrap::~VtkImageCheckerboardWrap()
{ }

void VtkImageCheckerboardWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageCheckerboard").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageCheckerboard").ToLocalChecked(), ConstructorGetter);
}

void VtkImageCheckerboardWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageCheckerboardWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkThreadedImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkThreadedImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageCheckerboardWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfDivisions", GetNumberOfDivisions);
	Nan::SetPrototypeMethod(tpl, "getNumberOfDivisions", GetNumberOfDivisions);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInput1Data", SetInput1Data);
	Nan::SetPrototypeMethod(tpl, "setInput1Data", SetInput1Data);

	Nan::SetPrototypeMethod(tpl, "SetInput2Data", SetInput2Data);
	Nan::SetPrototypeMethod(tpl, "setInput2Data", SetInput2Data);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfDivisions", SetNumberOfDivisions);
	Nan::SetPrototypeMethod(tpl, "setNumberOfDivisions", SetNumberOfDivisions);

#ifdef VTK_NODE_PLUS_VTKIMAGECHECKERBOARDWRAP_INITPTPL
	VTK_NODE_PLUS_VTKIMAGECHECKERBOARDWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkImageCheckerboardWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageCheckerboard> native = vtkSmartPointer<vtkImageCheckerboard>::New();
		VtkImageCheckerboardWrap* obj = new VtkImageCheckerboardWrap(native);
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

void VtkImageCheckerboardWrap::GetNumberOfDivisions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCheckerboardWrap *wrapper = ObjectWrap::Unwrap<VtkImageCheckerboardWrap>(info.Holder());
	vtkImageCheckerboard *native = (vtkImageCheckerboard *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfDivisions();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkImageCheckerboardWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCheckerboardWrap *wrapper = ObjectWrap::Unwrap<VtkImageCheckerboardWrap>(info.Holder());
	vtkImageCheckerboard *native = (vtkImageCheckerboard *)wrapper->native.GetPointer();
	vtkImageCheckerboard * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkImageCheckerboardWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageCheckerboardWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageCheckerboardWrap *w = new VtkImageCheckerboardWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageCheckerboardWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCheckerboardWrap *wrapper = ObjectWrap::Unwrap<VtkImageCheckerboardWrap>(info.Holder());
	vtkImageCheckerboard *native = (vtkImageCheckerboard *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkImageCheckerboard * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkImageCheckerboardWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageCheckerboardWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageCheckerboardWrap *w = new VtkImageCheckerboardWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageCheckerboardWrap::SetInput1Data(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCheckerboardWrap *wrapper = ObjectWrap::Unwrap<VtkImageCheckerboardWrap>(info.Holder());
	vtkImageCheckerboard *native = (vtkImageCheckerboard *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInput1Data(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageCheckerboardWrap::SetInput2Data(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCheckerboardWrap *wrapper = ObjectWrap::Unwrap<VtkImageCheckerboardWrap>(info.Holder());
	vtkImageCheckerboard *native = (vtkImageCheckerboard *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInput2Data(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageCheckerboardWrap::SetNumberOfDivisions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageCheckerboardWrap *wrapper = ObjectWrap::Unwrap<VtkImageCheckerboardWrap>(info.Holder());
	vtkImageCheckerboard *native = (vtkImageCheckerboard *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32Array())
	{
		v8::Local<v8::Int32Array>a0(v8::Local<v8::Int32Array>::Cast(info[0]->ToObject()));
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
		native->SetNumberOfDivisions(
			(int *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		int b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
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
		native->SetNumberOfDivisions(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetNumberOfDivisions(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

