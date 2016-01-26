/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkHomogeneousTransformWrap.h"
#include "vtkLinearTransformWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPointsWrap.h"
#include "vtkDataArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkLinearTransformWrap::ptpl;

VtkLinearTransformWrap::VtkLinearTransformWrap()
{ }

VtkLinearTransformWrap::VtkLinearTransformWrap(vtkSmartPointer<vtkLinearTransform> _native)
{ native = _native; }

VtkLinearTransformWrap::~VtkLinearTransformWrap()
{ }

void VtkLinearTransformWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkLinearTransform").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("LinearTransform").ToLocalChecked(), ConstructorGetter);
}

void VtkLinearTransformWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkLinearTransformWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkHomogeneousTransformWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkHomogeneousTransformWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkLinearTransformWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetLinearInverse", GetLinearInverse);
	Nan::SetPrototypeMethod(tpl, "getLinearInverse", GetLinearInverse);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "TransformNormals", TransformNormals);
	Nan::SetPrototypeMethod(tpl, "transformNormals", TransformNormals);

	Nan::SetPrototypeMethod(tpl, "TransformPoints", TransformPoints);
	Nan::SetPrototypeMethod(tpl, "transformPoints", TransformPoints);

	Nan::SetPrototypeMethod(tpl, "TransformPointsNormalsVectors", TransformPointsNormalsVectors);
	Nan::SetPrototypeMethod(tpl, "transformPointsNormalsVectors", TransformPointsNormalsVectors);

	Nan::SetPrototypeMethod(tpl, "TransformVectors", TransformVectors);
	Nan::SetPrototypeMethod(tpl, "transformVectors", TransformVectors);

	ptpl.Reset( tpl );
}

void VtkLinearTransformWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkLinearTransformWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearTransformWrap *wrapper = ObjectWrap::Unwrap<VtkLinearTransformWrap>(info.Holder());
	vtkLinearTransform *native = (vtkLinearTransform *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkLinearTransformWrap::GetLinearInverse(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearTransformWrap *wrapper = ObjectWrap::Unwrap<VtkLinearTransformWrap>(info.Holder());
	vtkLinearTransform *native = (vtkLinearTransform *)wrapper->native.GetPointer();
	vtkLinearTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLinearInverse();
		VtkLinearTransformWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkLinearTransformWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLinearTransformWrap *w = new VtkLinearTransformWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLinearTransformWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearTransformWrap *wrapper = ObjectWrap::Unwrap<VtkLinearTransformWrap>(info.Holder());
	vtkLinearTransform *native = (vtkLinearTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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

void VtkLinearTransformWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearTransformWrap *wrapper = ObjectWrap::Unwrap<VtkLinearTransformWrap>(info.Holder());
	vtkLinearTransform *native = (vtkLinearTransform *)wrapper->native.GetPointer();
	vtkLinearTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkLinearTransformWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkLinearTransformWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLinearTransformWrap *w = new VtkLinearTransformWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLinearTransformWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearTransformWrap *wrapper = ObjectWrap::Unwrap<VtkLinearTransformWrap>(info.Holder());
	vtkLinearTransform *native = (vtkLinearTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkLinearTransform * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkLinearTransformWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkLinearTransformWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkLinearTransformWrap *w = new VtkLinearTransformWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLinearTransformWrap::TransformNormals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearTransformWrap *wrapper = ObjectWrap::Unwrap<VtkLinearTransformWrap>(info.Holder());
	vtkLinearTransform *native = (vtkLinearTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataArrayWrap *a0 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[1]))
		{
			VtkDataArrayWrap *a1 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->TransformNormals(
				(vtkDataArray *) a0->native.GetPointer(),
				(vtkDataArray *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLinearTransformWrap::TransformPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearTransformWrap *wrapper = ObjectWrap::Unwrap<VtkLinearTransformWrap>(info.Holder());
	vtkLinearTransform *native = (vtkLinearTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPointsWrap *a0 = ObjectWrap::Unwrap<VtkPointsWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[1]))
		{
			VtkPointsWrap *a1 = ObjectWrap::Unwrap<VtkPointsWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->TransformPoints(
				(vtkPoints *) a0->native.GetPointer(),
				(vtkPoints *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLinearTransformWrap::TransformPointsNormalsVectors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearTransformWrap *wrapper = ObjectWrap::Unwrap<VtkLinearTransformWrap>(info.Holder());
	vtkLinearTransform *native = (vtkLinearTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPointsWrap *a0 = ObjectWrap::Unwrap<VtkPointsWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[1]))
		{
			VtkPointsWrap *a1 = ObjectWrap::Unwrap<VtkPointsWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[2]))
			{
				VtkDataArrayWrap *a2 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[2]->ToObject());
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[3]))
				{
					VtkDataArrayWrap *a3 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[3]->ToObject());
					if(info.Length() > 4 && info[4]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[4]))
					{
						VtkDataArrayWrap *a4 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[4]->ToObject());
						if(info.Length() > 5 && info[5]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[5]))
						{
							VtkDataArrayWrap *a5 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[5]->ToObject());
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->TransformPointsNormalsVectors(
								(vtkPoints *) a0->native.GetPointer(),
								(vtkPoints *) a1->native.GetPointer(),
								(vtkDataArray *) a2->native.GetPointer(),
								(vtkDataArray *) a3->native.GetPointer(),
								(vtkDataArray *) a4->native.GetPointer(),
								(vtkDataArray *) a5->native.GetPointer()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLinearTransformWrap::TransformVectors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearTransformWrap *wrapper = ObjectWrap::Unwrap<VtkLinearTransformWrap>(info.Holder());
	vtkLinearTransform *native = (vtkLinearTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataArrayWrap *a0 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[1]))
		{
			VtkDataArrayWrap *a1 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->TransformVectors(
				(vtkDataArray *) a0->native.GetPointer(),
				(vtkDataArray *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

