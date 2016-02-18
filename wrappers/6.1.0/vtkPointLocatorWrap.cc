/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkIncrementalPointLocatorWrap.h"
#include "vtkPointLocatorWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPointsWrap.h"
#include "vtkIdListWrap.h"
#include "vtkPolyDataWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPointLocatorWrap::ptpl;

VtkPointLocatorWrap::VtkPointLocatorWrap()
{ }

VtkPointLocatorWrap::VtkPointLocatorWrap(vtkSmartPointer<vtkPointLocator> _native)
{ native = _native; }

VtkPointLocatorWrap::~VtkPointLocatorWrap()
{ }

void VtkPointLocatorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPointLocator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PointLocator").ToLocalChecked(), ConstructorGetter);
}

void VtkPointLocatorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPointLocatorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkIncrementalPointLocatorWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkIncrementalPointLocatorWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPointLocatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BuildLocator", BuildLocator);
	Nan::SetPrototypeMethod(tpl, "buildLocator", BuildLocator);

	Nan::SetPrototypeMethod(tpl, "FindClosestNPoints", FindClosestNPoints);
	Nan::SetPrototypeMethod(tpl, "findClosestNPoints", FindClosestNPoints);

	Nan::SetPrototypeMethod(tpl, "FindDistributedPoints", FindDistributedPoints);
	Nan::SetPrototypeMethod(tpl, "findDistributedPoints", FindDistributedPoints);

	Nan::SetPrototypeMethod(tpl, "FindPointsWithinRadius", FindPointsWithinRadius);
	Nan::SetPrototypeMethod(tpl, "findPointsWithinRadius", FindPointsWithinRadius);

	Nan::SetPrototypeMethod(tpl, "FreeSearchStructure", FreeSearchStructure);
	Nan::SetPrototypeMethod(tpl, "freeSearchStructure", FreeSearchStructure);

	Nan::SetPrototypeMethod(tpl, "GenerateRepresentation", GenerateRepresentation);
	Nan::SetPrototypeMethod(tpl, "generateRepresentation", GenerateRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDivisions", GetDivisions);
	Nan::SetPrototypeMethod(tpl, "getDivisions", GetDivisions);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfPointsPerBucket", GetNumberOfPointsPerBucket);
	Nan::SetPrototypeMethod(tpl, "getNumberOfPointsPerBucket", GetNumberOfPointsPerBucket);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfPointsPerBucketMaxValue", GetNumberOfPointsPerBucketMaxValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfPointsPerBucketMaxValue", GetNumberOfPointsPerBucketMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfPointsPerBucketMinValue", GetNumberOfPointsPerBucketMinValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfPointsPerBucketMinValue", GetNumberOfPointsPerBucketMinValue);

	Nan::SetPrototypeMethod(tpl, "GetPoints", GetPoints);
	Nan::SetPrototypeMethod(tpl, "getPoints", GetPoints);

	Nan::SetPrototypeMethod(tpl, "GetPointsInBucket", GetPointsInBucket);
	Nan::SetPrototypeMethod(tpl, "getPointsInBucket", GetPointsInBucket);

	Nan::SetPrototypeMethod(tpl, "InitPointInsertion", InitPointInsertion);
	Nan::SetPrototypeMethod(tpl, "initPointInsertion", InitPointInsertion);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDivisions", SetDivisions);
	Nan::SetPrototypeMethod(tpl, "setDivisions", SetDivisions);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfPointsPerBucket", SetNumberOfPointsPerBucket);
	Nan::SetPrototypeMethod(tpl, "setNumberOfPointsPerBucket", SetNumberOfPointsPerBucket);

#ifdef VTK_NODE_PLUS_VTKPOINTLOCATORWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPOINTLOCATORWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPointLocatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPointLocator> native = vtkSmartPointer<vtkPointLocator>::New();
		VtkPointLocatorWrap* obj = new VtkPointLocatorWrap(native);
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

void VtkPointLocatorWrap::BuildLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkPointLocatorWrap>(info.Holder());
	vtkPointLocator *native = (vtkPointLocator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildLocator();
}

void VtkPointLocatorWrap::FindClosestNPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkPointLocatorWrap>(info.Holder());
	vtkPointLocator *native = (vtkPointLocator *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[2]))
			{
				VtkIdListWrap *a2 = ObjectWrap::Unwrap<VtkIdListWrap>(info[2]->ToObject());
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->FindClosestNPoints(
					info[0]->Int32Value(),
					(double *)(a1->Buffer()->GetContents().Data()),
					(vtkIdList *) a2->native.GetPointer()
				);
				return;
			}
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[3];
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 3; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[2]))
			{
				VtkIdListWrap *a2 = ObjectWrap::Unwrap<VtkIdListWrap>(info[2]->ToObject());
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->FindClosestNPoints(
					info[0]->Int32Value(),
					b1,
					(vtkIdList *) a2->native.GetPointer()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointLocatorWrap::FindDistributedPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkPointLocatorWrap>(info.Holder());
	vtkPointLocator *native = (vtkPointLocator *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[2]))
			{
				VtkIdListWrap *a2 = ObjectWrap::Unwrap<VtkIdListWrap>(info[2]->ToObject());
				if(info.Length() > 3 && info[3]->IsInt32())
				{
										if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->FindDistributedPoints(
						info[0]->Int32Value(),
						(double *)(a1->Buffer()->GetContents().Data()),
						(vtkIdList *) a2->native.GetPointer(),
						info[3]->Int32Value()
					);
					return;
				}
			}
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[3];
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 3; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[2]))
			{
				VtkIdListWrap *a2 = ObjectWrap::Unwrap<VtkIdListWrap>(info[2]->ToObject());
				if(info.Length() > 3 && info[3]->IsInt32())
				{
										if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->FindDistributedPoints(
						info[0]->Int32Value(),
						b1,
						(vtkIdList *) a2->native.GetPointer(),
						info[3]->Int32Value()
					);
					return;
				}
			}
		}
		else if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[4]))
					{
						VtkIdListWrap *a4 = ObjectWrap::Unwrap<VtkIdListWrap>(info[4]->ToObject());
						if(info.Length() > 5 && info[5]->IsInt32())
						{
														if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->FindDistributedPoints(
								info[0]->Int32Value(),
								info[1]->NumberValue(),
								info[2]->NumberValue(),
								info[3]->NumberValue(),
								(vtkIdList *) a4->native.GetPointer(),
								info[5]->Int32Value()
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

void VtkPointLocatorWrap::FindPointsWithinRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkPointLocatorWrap>(info.Holder());
	vtkPointLocator *native = (vtkPointLocator *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[2]))
			{
				VtkIdListWrap *a2 = ObjectWrap::Unwrap<VtkIdListWrap>(info[2]->ToObject());
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->FindPointsWithinRadius(
					info[0]->NumberValue(),
					(double *)(a1->Buffer()->GetContents().Data()),
					(vtkIdList *) a2->native.GetPointer()
				);
				return;
			}
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[3];
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 3; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[2]))
			{
				VtkIdListWrap *a2 = ObjectWrap::Unwrap<VtkIdListWrap>(info[2]->ToObject());
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->FindPointsWithinRadius(
					info[0]->NumberValue(),
					b1,
					(vtkIdList *) a2->native.GetPointer()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointLocatorWrap::FreeSearchStructure(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkPointLocatorWrap>(info.Holder());
	vtkPointLocator *native = (vtkPointLocator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FreeSearchStructure();
}

void VtkPointLocatorWrap::GenerateRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkPointLocatorWrap>(info.Holder());
	vtkPointLocator *native = (vtkPointLocator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkPolyDataWrap::ptpl))->HasInstance(info[1]))
		{
			VtkPolyDataWrap *a1 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[1]->ToObject());
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GenerateRepresentation(
				info[0]->Int32Value(),
				(vtkPolyData *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointLocatorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkPointLocatorWrap>(info.Holder());
	vtkPointLocator *native = (vtkPointLocator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPointLocatorWrap::GetDivisions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkPointLocatorWrap>(info.Holder());
	vtkPointLocator *native = (vtkPointLocator *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDivisions();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkPointLocatorWrap::GetNumberOfPointsPerBucket(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkPointLocatorWrap>(info.Holder());
	vtkPointLocator *native = (vtkPointLocator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfPointsPerBucket();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointLocatorWrap::GetNumberOfPointsPerBucketMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkPointLocatorWrap>(info.Holder());
	vtkPointLocator *native = (vtkPointLocator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfPointsPerBucketMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointLocatorWrap::GetNumberOfPointsPerBucketMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkPointLocatorWrap>(info.Holder());
	vtkPointLocator *native = (vtkPointLocator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfPointsPerBucketMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointLocatorWrap::GetPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkPointLocatorWrap>(info.Holder());
	vtkPointLocator *native = (vtkPointLocator *)wrapper->native.GetPointer();
	vtkPoints * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPoints();
	VtkPointsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPointsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPointsWrap *w = new VtkPointsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPointLocatorWrap::GetPointsInBucket(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkPointLocatorWrap>(info.Holder());
	vtkPointLocator *native = (vtkPointLocator *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() > 1 && info[1]->IsInt32Array())
		{
			v8::Local<v8::Int32Array>a1(v8::Local<v8::Int32Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			vtkIdList * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetPointsInBucket(
				(double *)(a0->Buffer()->GetContents().Data()),
				(int *)(a1->Buffer()->GetContents().Data())
			);
			VtkIdListWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkIdListWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkIdListWrap *w = new VtkIdListWrap();
			w->native = r;
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			int b1[3];
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 3; i++ )
			{
				if( !a1->Get(i)->IsInt32() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->Int32Value();
			}
			vtkIdList * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetPointsInBucket(
				(double *)(a0->Buffer()->GetContents().Data()),
				b1
			);
			VtkIdListWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkIdListWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkIdListWrap *w = new VtkIdListWrap();
			w->native = r;
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
		if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			int b1[3];
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 3; i++ )
			{
				if( !a1->Get(i)->IsInt32() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->Int32Value();
			}
			vtkIdList * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetPointsInBucket(
				b0,
				b1
			);
			VtkIdListWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkIdListWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkIdListWrap *w = new VtkIdListWrap();
			w->native = r;
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsInt32Array())
		{
			v8::Local<v8::Int32Array>a1(v8::Local<v8::Int32Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			vtkIdList * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetPointsInBucket(
				b0,
				(int *)(a1->Buffer()->GetContents().Data())
			);
			VtkIdListWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkIdListWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkIdListWrap *w = new VtkIdListWrap();
			w->native = r;
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointLocatorWrap::InitPointInsertion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkPointLocatorWrap>(info.Holder());
	vtkPointLocator *native = (vtkPointLocator *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPointsWrap *a0 = ObjectWrap::Unwrap<VtkPointsWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 6 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->InitPointInsertion(
				(vtkPoints *) a0->native.GetPointer(),
				(double *)(a1->Buffer()->GetContents().Data())
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[6];
			if( a1->Length() < 6 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 6; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->InitPointInsertion(
				(vtkPoints *) a0->native.GetPointer(),
				b1
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointLocatorWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkPointLocatorWrap>(info.Holder());
	vtkPointLocator *native = (vtkPointLocator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkPointLocatorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkPointLocatorWrap>(info.Holder());
	vtkPointLocator *native = (vtkPointLocator *)wrapper->native.GetPointer();
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

void VtkPointLocatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkPointLocatorWrap>(info.Holder());
	vtkPointLocator *native = (vtkPointLocator *)wrapper->native.GetPointer();
	vtkPointLocator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPointLocatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPointLocatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPointLocatorWrap *w = new VtkPointLocatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPointLocatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkPointLocatorWrap>(info.Holder());
	vtkPointLocator *native = (vtkPointLocator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPointLocator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkPointLocatorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPointLocatorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPointLocatorWrap *w = new VtkPointLocatorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointLocatorWrap::SetDivisions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkPointLocatorWrap>(info.Holder());
	vtkPointLocator *native = (vtkPointLocator *)wrapper->native.GetPointer();
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
		native->SetDivisions(
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
		native->SetDivisions(
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
				native->SetDivisions(
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

void VtkPointLocatorWrap::SetNumberOfPointsPerBucket(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkPointLocatorWrap>(info.Holder());
	vtkPointLocator *native = (vtkPointLocator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfPointsPerBucket(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

