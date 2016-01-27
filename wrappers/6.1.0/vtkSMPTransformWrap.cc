/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkTransformWrap.h"
#include "vtkSMPTransformWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPointsWrap.h"
#include "vtkDataArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSMPTransformWrap::ptpl;

VtkSMPTransformWrap::VtkSMPTransformWrap()
{ }

VtkSMPTransformWrap::VtkSMPTransformWrap(vtkSmartPointer<vtkSMPTransform> _native)
{ native = _native; }

VtkSMPTransformWrap::~VtkSMPTransformWrap()
{ }

void VtkSMPTransformWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSMPTransform").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SMPTransform").ToLocalChecked(), ConstructorGetter);
}

void VtkSMPTransformWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSMPTransformWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkTransformWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkTransformWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSMPTransformWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

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

void VtkSMPTransformWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSMPTransform> native = vtkSmartPointer<vtkSMPTransform>::New();
		VtkSMPTransformWrap* obj = new VtkSMPTransformWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkSMPTransformWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSMPTransformWrap *wrapper = ObjectWrap::Unwrap<VtkSMPTransformWrap>(info.Holder());
	vtkSMPTransform *native = (vtkSMPTransform *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSMPTransformWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSMPTransformWrap *wrapper = ObjectWrap::Unwrap<VtkSMPTransformWrap>(info.Holder());
	vtkSMPTransform *native = (vtkSMPTransform *)wrapper->native.GetPointer();
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

void VtkSMPTransformWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSMPTransformWrap *wrapper = ObjectWrap::Unwrap<VtkSMPTransformWrap>(info.Holder());
	vtkSMPTransform *native = (vtkSMPTransform *)wrapper->native.GetPointer();
	vtkSMPTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkSMPTransformWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSMPTransformWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSMPTransformWrap *w = new VtkSMPTransformWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSMPTransformWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSMPTransformWrap *wrapper = ObjectWrap::Unwrap<VtkSMPTransformWrap>(info.Holder());
	vtkSMPTransform *native = (vtkSMPTransform *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSMPTransform * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkSMPTransformWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSMPTransformWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSMPTransformWrap *w = new VtkSMPTransformWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSMPTransformWrap::TransformNormals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSMPTransformWrap *wrapper = ObjectWrap::Unwrap<VtkSMPTransformWrap>(info.Holder());
	vtkSMPTransform *native = (vtkSMPTransform *)wrapper->native.GetPointer();
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

void VtkSMPTransformWrap::TransformPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSMPTransformWrap *wrapper = ObjectWrap::Unwrap<VtkSMPTransformWrap>(info.Holder());
	vtkSMPTransform *native = (vtkSMPTransform *)wrapper->native.GetPointer();
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

void VtkSMPTransformWrap::TransformPointsNormalsVectors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSMPTransformWrap *wrapper = ObjectWrap::Unwrap<VtkSMPTransformWrap>(info.Holder());
	vtkSMPTransform *native = (vtkSMPTransform *)wrapper->native.GetPointer();
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

void VtkSMPTransformWrap::TransformVectors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSMPTransformWrap *wrapper = ObjectWrap::Unwrap<VtkSMPTransformWrap>(info.Holder());
	vtkSMPTransform *native = (vtkSMPTransform *)wrapper->native.GetPointer();
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

