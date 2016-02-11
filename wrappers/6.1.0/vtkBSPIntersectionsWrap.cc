/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkBSPIntersectionsWrap.h"
#include "vtkBSPCutsWrap.h"
#include "vtkCellWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkBSPIntersectionsWrap::ptpl;

VtkBSPIntersectionsWrap::VtkBSPIntersectionsWrap()
{ }

VtkBSPIntersectionsWrap::VtkBSPIntersectionsWrap(vtkSmartPointer<vtkBSPIntersections> _native)
{ native = _native; }

VtkBSPIntersectionsWrap::~VtkBSPIntersectionsWrap()
{ }

void VtkBSPIntersectionsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkBSPIntersections").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("BSPIntersections").ToLocalChecked(), ConstructorGetter);
}

void VtkBSPIntersectionsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkBSPIntersectionsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkBSPIntersectionsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ComputeIntersectionsUsingDataBoundsOff", ComputeIntersectionsUsingDataBoundsOff);
	Nan::SetPrototypeMethod(tpl, "computeIntersectionsUsingDataBoundsOff", ComputeIntersectionsUsingDataBoundsOff);

	Nan::SetPrototypeMethod(tpl, "ComputeIntersectionsUsingDataBoundsOn", ComputeIntersectionsUsingDataBoundsOn);
	Nan::SetPrototypeMethod(tpl, "computeIntersectionsUsingDataBoundsOn", ComputeIntersectionsUsingDataBoundsOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetComputeIntersectionsUsingDataBounds", GetComputeIntersectionsUsingDataBounds);
	Nan::SetPrototypeMethod(tpl, "getComputeIntersectionsUsingDataBounds", GetComputeIntersectionsUsingDataBounds);

	Nan::SetPrototypeMethod(tpl, "GetCuts", GetCuts);
	Nan::SetPrototypeMethod(tpl, "getCuts", GetCuts);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfRegions", GetNumberOfRegions);
	Nan::SetPrototypeMethod(tpl, "getNumberOfRegions", GetNumberOfRegions);

	Nan::SetPrototypeMethod(tpl, "GetRegionBounds", GetRegionBounds);
	Nan::SetPrototypeMethod(tpl, "getRegionBounds", GetRegionBounds);

	Nan::SetPrototypeMethod(tpl, "GetRegionDataBounds", GetRegionDataBounds);
	Nan::SetPrototypeMethod(tpl, "getRegionDataBounds", GetRegionDataBounds);

	Nan::SetPrototypeMethod(tpl, "IntersectsBox", IntersectsBox);
	Nan::SetPrototypeMethod(tpl, "intersectsBox", IntersectsBox);

	Nan::SetPrototypeMethod(tpl, "IntersectsCell", IntersectsCell);
	Nan::SetPrototypeMethod(tpl, "intersectsCell", IntersectsCell);

	Nan::SetPrototypeMethod(tpl, "IntersectsSphere2", IntersectsSphere2);
	Nan::SetPrototypeMethod(tpl, "intersectsSphere2", IntersectsSphere2);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetComputeIntersectionsUsingDataBounds", SetComputeIntersectionsUsingDataBounds);
	Nan::SetPrototypeMethod(tpl, "setComputeIntersectionsUsingDataBounds", SetComputeIntersectionsUsingDataBounds);

	Nan::SetPrototypeMethod(tpl, "SetCuts", SetCuts);
	Nan::SetPrototypeMethod(tpl, "setCuts", SetCuts);

	ptpl.Reset( tpl );
}

void VtkBSPIntersectionsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkBSPIntersections> native = vtkSmartPointer<vtkBSPIntersections>::New();
		VtkBSPIntersectionsWrap* obj = new VtkBSPIntersectionsWrap(native);
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

void VtkBSPIntersectionsWrap::ComputeIntersectionsUsingDataBoundsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSPIntersectionsWrap *wrapper = ObjectWrap::Unwrap<VtkBSPIntersectionsWrap>(info.Holder());
	vtkBSPIntersections *native = (vtkBSPIntersections *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeIntersectionsUsingDataBoundsOff();
}

void VtkBSPIntersectionsWrap::ComputeIntersectionsUsingDataBoundsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSPIntersectionsWrap *wrapper = ObjectWrap::Unwrap<VtkBSPIntersectionsWrap>(info.Holder());
	vtkBSPIntersections *native = (vtkBSPIntersections *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeIntersectionsUsingDataBoundsOn();
}

void VtkBSPIntersectionsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSPIntersectionsWrap *wrapper = ObjectWrap::Unwrap<VtkBSPIntersectionsWrap>(info.Holder());
	vtkBSPIntersections *native = (vtkBSPIntersections *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBSPIntersectionsWrap::GetComputeIntersectionsUsingDataBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSPIntersectionsWrap *wrapper = ObjectWrap::Unwrap<VtkBSPIntersectionsWrap>(info.Holder());
	vtkBSPIntersections *native = (vtkBSPIntersections *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputeIntersectionsUsingDataBounds();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBSPIntersectionsWrap::GetCuts(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSPIntersectionsWrap *wrapper = ObjectWrap::Unwrap<VtkBSPIntersectionsWrap>(info.Holder());
	vtkBSPIntersections *native = (vtkBSPIntersections *)wrapper->native.GetPointer();
	vtkBSPCuts * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCuts();
	VtkBSPCutsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkBSPCutsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBSPCutsWrap *w = new VtkBSPCutsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBSPIntersectionsWrap::GetNumberOfRegions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSPIntersectionsWrap *wrapper = ObjectWrap::Unwrap<VtkBSPIntersectionsWrap>(info.Holder());
	vtkBSPIntersections *native = (vtkBSPIntersections *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfRegions();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBSPIntersectionsWrap::GetRegionBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSPIntersectionsWrap *wrapper = ObjectWrap::Unwrap<VtkBSPIntersectionsWrap>(info.Holder());
	vtkBSPIntersections *native = (vtkBSPIntersections *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32())
	{
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
			r = native->GetRegionBounds(
				info[0]->Int32Value(),
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
			r = native->GetRegionBounds(
				info[0]->Int32Value(),
				b1
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBSPIntersectionsWrap::GetRegionDataBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSPIntersectionsWrap *wrapper = ObjectWrap::Unwrap<VtkBSPIntersectionsWrap>(info.Holder());
	vtkBSPIntersections *native = (vtkBSPIntersections *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32())
	{
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
			r = native->GetRegionDataBounds(
				info[0]->Int32Value(),
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
			r = native->GetRegionDataBounds(
				info[0]->Int32Value(),
				b1
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBSPIntersectionsWrap::IntersectsBox(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSPIntersectionsWrap *wrapper = ObjectWrap::Unwrap<VtkBSPIntersectionsWrap>(info.Holder());
	vtkBSPIntersections *native = (vtkBSPIntersections *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						if(info.Length() > 5 && info[5]->IsNumber())
						{
							if(info.Length() > 6 && info[6]->IsNumber())
							{
								int r;
								if(info.Length() != 7)
								{
									Nan::ThrowError("Too many parameters.");
									return;
								}
								r = native->IntersectsBox(
									info[0]->Int32Value(),
									info[1]->NumberValue(),
									info[2]->NumberValue(),
									info[3]->NumberValue(),
									info[4]->NumberValue(),
									info[5]->NumberValue(),
									info[6]->NumberValue()
								);
								info.GetReturnValue().Set(Nan::New(r));
								return;
							}
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBSPIntersectionsWrap::IntersectsCell(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSPIntersectionsWrap *wrapper = ObjectWrap::Unwrap<VtkBSPIntersectionsWrap>(info.Holder());
	vtkBSPIntersections *native = (vtkBSPIntersections *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkCellWrap::ptpl))->HasInstance(info[1]))
		{
			VtkCellWrap *a1 = ObjectWrap::Unwrap<VtkCellWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				int r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->IntersectsCell(
					info[0]->Int32Value(),
					(vtkCell *) a1->native.GetPointer(),
					info[2]->Int32Value()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBSPIntersectionsWrap::IntersectsSphere2(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSPIntersectionsWrap *wrapper = ObjectWrap::Unwrap<VtkBSPIntersectionsWrap>(info.Holder());
	vtkBSPIntersections *native = (vtkBSPIntersections *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						int r;
						if(info.Length() != 5)
						{
							Nan::ThrowError("Too many parameters.");
							return;
						}
						r = native->IntersectsSphere2(
							info[0]->Int32Value(),
							info[1]->NumberValue(),
							info[2]->NumberValue(),
							info[3]->NumberValue(),
							info[4]->NumberValue()
						);
						info.GetReturnValue().Set(Nan::New(r));
						return;
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBSPIntersectionsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSPIntersectionsWrap *wrapper = ObjectWrap::Unwrap<VtkBSPIntersectionsWrap>(info.Holder());
	vtkBSPIntersections *native = (vtkBSPIntersections *)wrapper->native.GetPointer();
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

void VtkBSPIntersectionsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSPIntersectionsWrap *wrapper = ObjectWrap::Unwrap<VtkBSPIntersectionsWrap>(info.Holder());
	vtkBSPIntersections *native = (vtkBSPIntersections *)wrapper->native.GetPointer();
	vtkBSPIntersections * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkBSPIntersectionsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkBSPIntersectionsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBSPIntersectionsWrap *w = new VtkBSPIntersectionsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBSPIntersectionsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSPIntersectionsWrap *wrapper = ObjectWrap::Unwrap<VtkBSPIntersectionsWrap>(info.Holder());
	vtkBSPIntersections *native = (vtkBSPIntersections *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkBSPIntersections * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkBSPIntersectionsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkBSPIntersectionsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkBSPIntersectionsWrap *w = new VtkBSPIntersectionsWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBSPIntersectionsWrap::SetComputeIntersectionsUsingDataBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSPIntersectionsWrap *wrapper = ObjectWrap::Unwrap<VtkBSPIntersectionsWrap>(info.Holder());
	vtkBSPIntersections *native = (vtkBSPIntersections *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetComputeIntersectionsUsingDataBounds(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBSPIntersectionsWrap::SetCuts(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBSPIntersectionsWrap *wrapper = ObjectWrap::Unwrap<VtkBSPIntersectionsWrap>(info.Holder());
	vtkBSPIntersections *native = (vtkBSPIntersections *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkBSPCutsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkBSPCutsWrap *a0 = ObjectWrap::Unwrap<VtkBSPCutsWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCuts(
			(vtkBSPCuts *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

