/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractTransformWrap.h"
#include "vtkHomogeneousTransformWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPointsWrap.h"
#include "vtkDataArrayWrap.h"
#include "vtkMatrix4x4Wrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkHomogeneousTransformWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkHomogeneousTransformWrap::ptpl;

VtkHomogeneousTransformWrap::VtkHomogeneousTransformWrap()
{ }

VtkHomogeneousTransformWrap::VtkHomogeneousTransformWrap(vtkSmartPointer<vtkHomogeneousTransform> _native)
{ native = _native; }

VtkHomogeneousTransformWrap::~VtkHomogeneousTransformWrap()
{ }

void VtkHomogeneousTransformWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractTransformWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractTransformWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkHomogeneousTransformWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkHomogeneousTransform").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("HomogeneousTransform").ToLocalChecked(),tpl->GetFunction());
}

void VtkHomogeneousTransformWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetHomogeneousInverse", GetHomogeneousInverse);
	Nan::SetPrototypeMethod(tpl, "getHomogeneousInverse", GetHomogeneousInverse);

	Nan::SetPrototypeMethod(tpl, "GetMatrix", GetMatrix);
	Nan::SetPrototypeMethod(tpl, "getMatrix", GetMatrix);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "TransformPoints", TransformPoints);
	Nan::SetPrototypeMethod(tpl, "transformPoints", TransformPoints);

	Nan::SetPrototypeMethod(tpl, "TransformPointsNormalsVectors", TransformPointsNormalsVectors);
	Nan::SetPrototypeMethod(tpl, "transformPointsNormalsVectors", TransformPointsNormalsVectors);

}

void VtkHomogeneousTransformWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkHomogeneousTransformWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHomogeneousTransformWrap *wrapper = ObjectWrap::Unwrap<VtkHomogeneousTransformWrap>(info.Holder());
	vtkHomogeneousTransform *native = (vtkHomogeneousTransform *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkHomogeneousTransformWrap::GetHomogeneousInverse(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHomogeneousTransformWrap *wrapper = ObjectWrap::Unwrap<VtkHomogeneousTransformWrap>(info.Holder());
	vtkHomogeneousTransform *native = (vtkHomogeneousTransform *)wrapper->native.GetPointer();
	vtkHomogeneousTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHomogeneousInverse();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkHomogeneousTransformWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHomogeneousTransformWrap *w = new VtkHomogeneousTransformWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHomogeneousTransformWrap::GetMatrix(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHomogeneousTransformWrap *wrapper = ObjectWrap::Unwrap<VtkHomogeneousTransformWrap>(info.Holder());
	vtkHomogeneousTransform *native = (vtkHomogeneousTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkMatrix4x4Wrap *a0 = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetMatrix(
			(vtkMatrix4x4 *) a0->native.GetPointer()
		);
		return;
	}
	vtkMatrix4x4 * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMatrix();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkMatrix4x4Wrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMatrix4x4Wrap *w = new VtkMatrix4x4Wrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHomogeneousTransformWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHomogeneousTransformWrap *wrapper = ObjectWrap::Unwrap<VtkHomogeneousTransformWrap>(info.Holder());
	vtkHomogeneousTransform *native = (vtkHomogeneousTransform *)wrapper->native.GetPointer();
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

void VtkHomogeneousTransformWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHomogeneousTransformWrap *wrapper = ObjectWrap::Unwrap<VtkHomogeneousTransformWrap>(info.Holder());
	vtkHomogeneousTransform *native = (vtkHomogeneousTransform *)wrapper->native.GetPointer();
	vtkHomogeneousTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkHomogeneousTransformWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHomogeneousTransformWrap *w = new VtkHomogeneousTransformWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHomogeneousTransformWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHomogeneousTransformWrap *wrapper = ObjectWrap::Unwrap<VtkHomogeneousTransformWrap>(info.Holder());
	vtkHomogeneousTransform *native = (vtkHomogeneousTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkHomogeneousTransform * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkHomogeneousTransformWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHomogeneousTransformWrap *w = new VtkHomogeneousTransformWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHomogeneousTransformWrap::TransformPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHomogeneousTransformWrap *wrapper = ObjectWrap::Unwrap<VtkHomogeneousTransformWrap>(info.Holder());
	vtkHomogeneousTransform *native = (vtkHomogeneousTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPointsWrap *a0 = ObjectWrap::Unwrap<VtkPointsWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
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

void VtkHomogeneousTransformWrap::TransformPointsNormalsVectors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHomogeneousTransformWrap *wrapper = ObjectWrap::Unwrap<VtkHomogeneousTransformWrap>(info.Holder());
	vtkHomogeneousTransform *native = (vtkHomogeneousTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPointsWrap *a0 = ObjectWrap::Unwrap<VtkPointsWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkPointsWrap *a1 = ObjectWrap::Unwrap<VtkPointsWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject())
			{
				VtkDataArrayWrap *a2 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[2]->ToObject());
				if(info.Length() > 3 && info[3]->IsObject())
				{
					VtkDataArrayWrap *a3 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[3]->ToObject());
					if(info.Length() > 4 && info[4]->IsObject())
					{
						VtkDataArrayWrap *a4 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[4]->ToObject());
						if(info.Length() > 5 && info[5]->IsObject())
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
