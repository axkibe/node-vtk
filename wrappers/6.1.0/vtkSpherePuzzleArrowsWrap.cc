/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkSpherePuzzleArrowsWrap.h"
#include "vtkObjectWrap.h"
#include "vtkSpherePuzzleWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSpherePuzzleArrowsWrap::ptpl;

VtkSpherePuzzleArrowsWrap::VtkSpherePuzzleArrowsWrap()
{ }

VtkSpherePuzzleArrowsWrap::VtkSpherePuzzleArrowsWrap(vtkSmartPointer<vtkSpherePuzzleArrows> _native)
{ native = _native; }

VtkSpherePuzzleArrowsWrap::~VtkSpherePuzzleArrowsWrap()
{ }

void VtkSpherePuzzleArrowsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSpherePuzzleArrows").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SpherePuzzleArrows").ToLocalChecked(), ConstructorGetter);
}

void VtkSpherePuzzleArrowsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSpherePuzzleArrowsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSpherePuzzleArrowsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetPermutation", GetPermutation);
	Nan::SetPrototypeMethod(tpl, "getPermutation", GetPermutation);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetPermutation", SetPermutation);
	Nan::SetPrototypeMethod(tpl, "setPermutation", SetPermutation);

	Nan::SetPrototypeMethod(tpl, "SetPermutationComponent", SetPermutationComponent);
	Nan::SetPrototypeMethod(tpl, "setPermutationComponent", SetPermutationComponent);

	ptpl.Reset( tpl );
}

void VtkSpherePuzzleArrowsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSpherePuzzleArrows> native = vtkSmartPointer<vtkSpherePuzzleArrows>::New();
		VtkSpherePuzzleArrowsWrap* obj = new VtkSpherePuzzleArrowsWrap(native);
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

void VtkSpherePuzzleArrowsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpherePuzzleArrowsWrap *wrapper = ObjectWrap::Unwrap<VtkSpherePuzzleArrowsWrap>(info.Holder());
	vtkSpherePuzzleArrows *native = (vtkSpherePuzzleArrows *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSpherePuzzleArrowsWrap::GetPermutation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpherePuzzleArrowsWrap *wrapper = ObjectWrap::Unwrap<VtkSpherePuzzleArrowsWrap>(info.Holder());
	vtkSpherePuzzleArrows *native = (vtkSpherePuzzleArrows *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPermutation();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 32 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 32);
	memcpy(ab->GetContents().Data(), r, 32 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkSpherePuzzleArrowsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpherePuzzleArrowsWrap *wrapper = ObjectWrap::Unwrap<VtkSpherePuzzleArrowsWrap>(info.Holder());
	vtkSpherePuzzleArrows *native = (vtkSpherePuzzleArrows *)wrapper->native.GetPointer();
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

void VtkSpherePuzzleArrowsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpherePuzzleArrowsWrap *wrapper = ObjectWrap::Unwrap<VtkSpherePuzzleArrowsWrap>(info.Holder());
	vtkSpherePuzzleArrows *native = (vtkSpherePuzzleArrows *)wrapper->native.GetPointer();
	vtkSpherePuzzleArrows * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkSpherePuzzleArrowsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSpherePuzzleArrowsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSpherePuzzleArrowsWrap *w = new VtkSpherePuzzleArrowsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSpherePuzzleArrowsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpherePuzzleArrowsWrap *wrapper = ObjectWrap::Unwrap<VtkSpherePuzzleArrowsWrap>(info.Holder());
	vtkSpherePuzzleArrows *native = (vtkSpherePuzzleArrows *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSpherePuzzleArrows * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkSpherePuzzleArrowsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSpherePuzzleArrowsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSpherePuzzleArrowsWrap *w = new VtkSpherePuzzleArrowsWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSpherePuzzleArrowsWrap::SetPermutation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpherePuzzleArrowsWrap *wrapper = ObjectWrap::Unwrap<VtkSpherePuzzleArrowsWrap>(info.Holder());
	vtkSpherePuzzleArrows *native = (vtkSpherePuzzleArrows *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSpherePuzzleWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSpherePuzzleWrap *a0 = ObjectWrap::Unwrap<VtkSpherePuzzleWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPermutation(
			(vtkSpherePuzzle *) a0->native.GetPointer()
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32Array())
	{
		v8::Local<v8::Int32Array>a0(v8::Local<v8::Int32Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 32 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPermutation(
			(int *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		int b0[32];
		if( a0->Length() < 32 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 32; i++ )
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
		native->SetPermutation(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSpherePuzzleArrowsWrap::SetPermutationComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpherePuzzleArrowsWrap *wrapper = ObjectWrap::Unwrap<VtkSpherePuzzleArrowsWrap>(info.Holder());
	vtkSpherePuzzleArrows *native = (vtkSpherePuzzleArrows *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetPermutationComponent(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

